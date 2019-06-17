#include <stdio.h>
int sum = 0;
int mysubtotal(int first, int end_of_num) {
    if (first < end_of_num)
        sum = first + mysubtotal(first + 1, end_of_num);
    else if (first == end_of_num)
        return first;
    else
        return sum;
}
void myswap(int *input1, int *input2) {
    if (*input1 > *input2)
        (*input1) ^= (*input2) ^= (*input1) ^= (*input2);
    printf("The summation %d to %d is:%d \n", *input1, *input2, mysubtotal(*input1, *input2));
}

int main() {
    int input1, input2;
    sum = 0;
    if (scanf("%d %d", &input1, &input2) == EOF)
        return 0;
    myswap(&input1, &input2);
    main();
}
