#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MILLION 1000000


int main(void)
{
	int n = 50;
	while(n--){
	        long int loop = 1000;
	        struct timespec tpstart;
	        struct timespec tpend;
        	long timedif;

	        clock_gettime(CLOCK_MONOTONIC, &tpstart);

        	while (--loop){
	                printf("HELLO");
        	}

	        clock_gettime(CLOCK_REALTIME, &tpend);
        	timedif = MILLION * (tpend.tv_sec - tpstart.tv_sec) + (tpend.tv_nsec - tpstart.tv_nsec);
	        fprintf(stderr, "%ld\n", timedif);
	}
        return 0;
}
