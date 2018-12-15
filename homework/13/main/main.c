#include "myheader.h"

int main()
{
    int arr[100000],i,tmp,want;
    FILE *file_pointer;
    file_pointer = fopen("input.txt","r");

    for(i=0;fscanf(file_pointer," %d",&tmp)!=EOF;i++)
        arr[i]=tmp;

    mySort(arr,i);
    //for(int j=0;j<i;j++)
      //   printf("%d ",arr[j]);
    printf("Sorted finish.\n");

    while( printf("Please input your target:") && scanf("%d",&want)!=EOF){
        int index = myBinarySearch(arr,want,0,i);
        printf("%d %d %d\n",arr[1550],arr[1551],arr[1552]);
        if(index == -1)
            printf("target not found.\n");
        else
            printf("target found at index %d.\n",index);
    }

    fclose(file_pointer);
    return 0;
}
