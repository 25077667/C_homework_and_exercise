#include<stdio.h>
#include<string>
#include<stdlib.h>

int bubble_sort(int* arr_input, int n, int* compare_times){
    //return swap times
    int arr[n]={0}; //prevent arr will inflect the arr_input, that is don't not modify the raw array
    for(int i=0;i<n;i++)
        arr[i]=arr_input[i];
    //sorting
    int swap_times=0; *compare_times=0;
    for(int i=(n-1); i>=0; i--){
        for(int j=1;j<=i;j++){
            if(arr[j]<arr[j-1]){
                swap_times++;
                int tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
            (*compare_times)++;
        }
    }
    //convert file name
    char* file_first_line_text = "Bubble sort result:\n";
    char array_size_buffer[4]; itoa(n,array_size_buffer,10);
    std::string array_size_buffer_toString = std::string(array_size_buffer);
    std::string file_name= "BubbleSort" + array_size_buffer_toString + ".txt";
    //write file
    FILE *file_pointer;
    file_pointer = fopen(file_name.c_str(),"w+");
    fprintf(file_pointer,file_first_line_text);
    for(int i=0;i<n;i++){
        char sequence[5];itoa(arr[i],sequence,10);
        fprintf(file_pointer,sequence);
        fprintf(file_pointer," ");
    }
    return swap_times;
}

int selection_sort(int* arr_input, int n, int* compare_times){
    int arr[n]={0}; //prevent arr will inflect the arr_input, that is don't not modify the raw array
    for(int i=0;i<n;i++)
        arr[i]=arr_input[i];

    int swap_times=0; *compare_times=0;
    for(int i=n-1;i>0;i--){
        int max_place=i; //max has been used by c++ std
        for(int j=0;j<i;j++){
            if(arr[j]>arr[max_place]){
                max_place = j;
            }
            (*compare_times)++;
        }
        int tmp = arr[max_place];
        arr[max_place] = arr[i];
        arr[i] = tmp;
        swap_times ++;
    }

    char* file_first_line_text = "Selection sort result:\n";
    char array_size_buffer[4]; itoa(n,array_size_buffer,10);
    std::string array_size_buffer_toString = std::string(array_size_buffer);
    std::string file_name= "SelectionSort" + array_size_buffer_toString + ".txt";//file name
    FILE *file_pointer;
    file_pointer = fopen(file_name.c_str(),"w+");
    fprintf(file_pointer,file_first_line_text);
    for(int i=0;i<n;i++){
        char sequence[5];itoa(arr[i],sequence,10);
        fprintf(file_pointer,sequence);
        fprintf(file_pointer," ");
    }
    return swap_times;
}

int insertion_sort(int* arr_input, int n, int* compare_times){
    int arr[n]={0}; //prevent arr will inflect the arr_input, that is don't not modify the raw array
    for(int i=0;i<n;i++)
        arr[i]=arr_input[i];

    int swap_times=0; *compare_times=0;
    for(int i=1;i<n;i++){
        int index = arr[i],j;
        for(j=i; (j>0)&&(arr[j-1]>index);j--){
            arr[j]=arr[j-1];
            swap_times ++;
            (*compare_times)++ ;
        }
        arr[j] = index;
        swap_times++;
    }
    //copying and pasting are shameful, but useful.
    char* file_first_line_text = "Insertion sort result:\n";
    char array_size_buffer[4]; itoa(n,array_size_buffer,10);
    std::string array_size_buffer_toString = std::string(array_size_buffer);
    std::string file_name= "InsertionSort" + array_size_buffer_toString + ".txt";
    FILE *file_pointer;
    file_pointer = fopen(file_name.c_str(),"w+");
    fprintf(file_pointer,file_first_line_text);
    for(int i=0;i<n;i++){
        char sequence[5];itoa(arr[i],sequence,10);
        fprintf(file_pointer,sequence);
        fprintf(file_pointer," ");
    }
    return swap_times;
}
int main(){
    int tmp, array_500[500]={0}, array_1000[1000]={0}, array_2000[2000]={0};
    FILE *file_pointer;
    file_pointer = fopen("input.txt","r");
    for(int i=0;fscanf(file_pointer,"%d",&tmp)!=EOF;i++){
        if(i<500)
            array_500[i]=tmp;
        else if(i<1500)
            array_1000[i-500]=tmp;
        else
            array_2000[i-1500]=tmp;
    }

    int bubble_compare_times=0, selection_compare_times=0, insertion_compare_times=0;

    printf("%8s 1 %11s %18s %15s   \n","Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_500,sizeof(array_500)/4,&bubble_compare_times), selection_sort(array_500,sizeof(array_500)/4,&selection_compare_times), insertion_sort(array_500,sizeof(array_500)/4,&insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    printf("%8s 2 %11s %18s %15s   \n","Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_1000,sizeof(array_1000)/4,&bubble_compare_times), selection_sort(array_1000,sizeof(array_1000)/4,&selection_compare_times), insertion_sort(array_1000,sizeof(array_1000)/4,&insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    printf("%8s 3 %11s %18s %15s   \n","Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_2000,sizeof(array_2000)/4,&bubble_compare_times), selection_sort(array_2000,sizeof(array_2000)/4,&selection_compare_times), insertion_sort(array_2000,sizeof(array_2000)/4,&insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    return 0;
}
