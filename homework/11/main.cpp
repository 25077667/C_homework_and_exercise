#include <stdio.h>
#include <string.h>
int choose(int n, int m) {
    if (m > n)
        return 0;
    else if (m == 1)
        return n;
    else if (n == 0 || m == 0)
        return 1;
    else
        return choose(n - 1, m - 1) + choose(n - 1, m);
}

void binomial(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++)
            printf("%d ", choose(i, j));
        printf("\n");
    }
}

void median(int* arr) {
    for (int i = 10; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
    }  //the topic said to use bubble sort
    for (int i = 0; i < 11; i++)
        printf("%d ", arr[i]);
    printf("\nmedian is:%d\n\n", arr[5]);
}

void magic_square(int n) {
    int arr[15][15] = {0};
    memset(arr, 0, 15 * 15 * 4);
    int current_horizon = (n / 2), current_vertical = 0, counter = 1;
    while (counter <= n * n) {
        if (arr[current_vertical][current_horizon] != 0) {
            if (current_horizon == current_vertical && current_horizon == n - 1) {
                current_horizon = 0;
                current_vertical = 1;
            } else {
                current_vertical += 2;
                current_horizon++;
            }
        }

        arr[current_vertical][current_horizon] = counter++;
        current_vertical--;
        current_horizon--;
        if (current_vertical < 0) current_vertical = n - 1;
        if (current_horizon < 0) current_horizon = n - 1;
    }
    for (int i = 0; i < n && printf("\n"); i++)
        for (int j = 0; j < n; j++)
            printf("%2d ", arr[i][j]);
}

int main() {
    int n;
    printf("Please input number of binomial power:");
    scanf("%d", &n);
    binomial(n);
    printf("\nPlease input 11 numbers:\n");

    int arr[11] = {0};
    for (int i = 0; i < 11; i++)
        scanf("%d", &arr[i]);
    median(arr);

    printf("Please input the size of magic square:");
    scanf("%d", &n);
    magic_square(n);

    return 0;
}
