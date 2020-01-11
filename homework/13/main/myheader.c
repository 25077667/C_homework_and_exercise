#include "myheader.h"

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int getIndexAndDivide(int* arr, int front, int tail) {
    int pivot = arr[tail];
    int i = front - 1;
    for (int j = front; j < tail; j++)
        if (arr[j] < pivot)
            swap(&arr[++i], &arr[j]);
    swap(&arr[++i], &arr[tail]);
    return i;
}

void mySort(int* arr, int front, int tail) {
    if (front < tail) {
        int divideIndex = getIndexAndDivide(arr, front, tail);
        mySort(arr, front, divideIndex - 1);
        mySort(arr, divideIndex + 1, tail);
    }
}

int myBinarySearch(int* arr, int target, int head, int tail) {
    int middle = (head + tail) / 2;
    //printf("%d %d %d\n",head,middle,tail);
    if (tail < head)
        return -1;
    else if (arr[middle] == target)
        return middle;
    else if (arr[middle] < target)
        return myBinarySearch(arr, target, middle + 1, tail);
    else if (arr[middle] > target)
        return myBinarySearch(arr, target, head, middle - 1);
    else
        return -1;
}
