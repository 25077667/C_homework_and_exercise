#include "myheader.h"

void mySort(int *arr,int n){
    //insertion sort
    int i;
    for(i=1;i<n;i++){
        int index = arr[i],j;
        for(j=i;(j>0)&&(arr[j-1]>index);j--)
            arr[j]=arr[j-1];
        arr[j]=index;
    }
}

int myBinarySearch(int *arr, int target, int head, int tail){
    int middle=(head+tail)/2;
    //printf("%d %d %d\n",head,middle,tail);
    if(tail<head)
        return -1;
    else if(arr[middle] == target)
        return middle;
    else if(arr[middle]<target)
        return myBinarySearch(arr,target,middle+1,tail);
    else if(arr[middle]>target)
        return myBinarySearch(arr,target,head,middle-1);
    else
        return -1;
}
