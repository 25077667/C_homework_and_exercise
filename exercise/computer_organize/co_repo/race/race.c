
#include <error.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void* do_race(void* arg) {
    char* name = (char*)arg;
    int fd = open("/tmp/race", O_RDWR | O_CREAT | O_APPEND, 0777);

    if (lockf(fd, F_TLOCK, 0) < 0) {
        printf("File locked by someone\n");
    } else {
        printf("%s tried locking!\n", name);
        if (lockf(fd, F_LOCK, 0) == -1) {
            printf("%s is fail to lock\n", name);
        }

        printf("%s is going to sleep for 50 ms!\n", name);
        usleep(500);
        if (lockf(fd, F_ULOCK, 0) == -1) {
            printf("%s is fail to unlock\n", name);
        }
        printf("%s unlock success!\n", name);
    }
    close(fd);
}

void create_thread() {
    pthread_t* new_thread1 = (pthread_t*)malloc(sizeof(pthread_t));
    pthread_t* new_thread2 = (pthread_t*)malloc(sizeof(pthread_t));
    pthread_create(new_thread1, NULL, do_race, "Parent");
    pthread_create(new_thread2, NULL, do_race, "Child");
    pthread_join(*new_thread1, NULL);
    pthread_join(*new_thread2, NULL);
}

void multi_proc() {
    pid_t pid = fork();
    if (pid == 0) {
        do_race("Child");
    } else if (pid > 0) {
        do_race("Parent");
        wait(NULL);
    } else
        printf("Fork fail");
}

int main() {
    int n = 10;
    while (n--) {
        printf("In %d times:\n", 10 - n);
        create_thread();
        //multi_proc();
    }
    return 0;
}