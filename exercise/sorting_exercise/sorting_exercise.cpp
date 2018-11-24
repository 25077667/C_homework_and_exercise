#include <stdio.h>
void bubble(int* arr,int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++)
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
    }
}
void selection(int* arr,int n){
    for(int i=n-1;i>=0;i--){
        int index=i;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[index])
                index=j;
        }
        int tmp=arr[i];
        arr[i]=arr[index];
        arr[index]=tmp;
    }
}
void insertion(int* arr,int n){
    for(int i=1;i<n;i++){
        int index = arr[i],j;
        for(j=i;(j>0)&&(arr[j-1]>index);j--)
            arr[j]=arr[j-1];
        arr[j]=index;
    }
}
int main(){
    FILE* file_pointer;
    file_pointer = fopen("input.txt","r");
    int arr[3500]={0},tmp;
    for(int i = 0; fscanf(file_pointer, "%d", &tmp)!=EOF; i++){
        arr[i]=tmp;
    }

    printf("please chose one for the sorting method, \(1)bubble \(2)selection \(3)insertion\n\n");
    scanf(" %d",&tmp);
    if(tmp == 1)
        bubble(arr,3500);
    else if(tmp == 2)
        selection(arr,3500);
    else if(tmp == 3)
        insertion(arr,3500);
    else{
        printf("\ndon\'t play\n");
        return 0;
    }

    for(int i=0;i<3500;i++)
        printf("%d ",arr[i]);

    fclose(file_pointer);
    return 0;
}
