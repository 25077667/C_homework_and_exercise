#include <stdio.h>
#include <stdlib.h>
#define NOT_TRIANGLE -1
#define RIGHT_TRIANGLE 1
#define REGULAR_TRIANGLE 2
#define ISOSCELES_TRIANGLE 3
#define NORMAL_TRIANGLE 4

int compare(const void *a, const void *b) {
    int c = *(int *)a;
    int d = *(int *)b;
    if (c < d)
        return -1;
    else if (c == d)
        return 0;
    else
        return 1;
}

int checkTriangle(int a, int b, int c) {
    //a b c must be "a <= b <= c"
    if (a + b <= c)
        return NOT_TRIANGLE;
    else {
        if (a * a + b * b == c * c)
            return RIGHT_TRIANGLE;
        else if (a == b && b == c)
            return REGULAR_TRIANGLE;
        else if ((a == b && b < c) || (b == c && a < c))
            return ISOSCELES_TRIANGLE;
        else
            return NOT_TRIANGLE;
    }
}

void handleInput() {
    int data[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &data[i]);
    for (int i = 0; i < 3; i++)
        printf("%d ", data[i]);
    //you can write your sort by your self
    //but i want to use qsort() which in stdlib.h
    qsort(data, 3, sizeof(int), compare);
    int result = checkTriangle(data[0], data[1], data[2]);
    if (result == NOT_TRIANGLE)
        printf("cannot constuct a triangle!\n");
    else if (result == RIGHT_TRIANGLE)
        printf("cannot constuct a triangle!\nthis is a right triangle!\n");
    else if (result == REGULAR_TRIANGLE)
        printf("cannot constuct a triangle!\nthis is a regular triangle!\n");
    else if (result == ISOSCELES_TRIANGLE)
        printf("cannot constuct a triangle!\nthis is a isosceles triangle!\n");
    else
        printf("cannot constuct a triangle!\nthis is a normal triangle!\n");
}

int main() {
    //4.2
    int i;
    for (i = 0; i < 10; i++)
        handleInput();

    do {
        handleInput();
    } while (i--);

    while (i < 10) {
        i++;
        handleInput();
    }
    return 0;
}
