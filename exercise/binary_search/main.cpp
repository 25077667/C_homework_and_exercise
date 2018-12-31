#include<stdio.h>

void sort(int* arr,int n){
    //insertion sort
    for(int i=1;i<n;i++){
        int index = arr[i],j;
        for(j=i;(j>0)&&(arr[j-1]>index);j--)
            arr[j]=arr[j-1];
        arr[j]=index;
    }
}

int binary_search(int* arr,int big,int small, int want){
    int middle=(big+small)/2;
    if(small>big)
        return -1;
    else if(arr[middle] == want)
        return middle;
    else if(arr[middle]>want)
        binary_search(arr,middle-1,small,want);
    else if(arr[middle]<want)
        binary_search(arr,big,middle+1,want);
    else
        return -1;
}

int main() {
    int arr[10]={1,9,2,3,8,4,7,5,6,7},want;
    scanf("%d",&want);
    sort(arr,10);

    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    printf("\nthe index is (-1 is not found or error):%d\n",binary_search(arr,10,0,want));

	return 0;
}
