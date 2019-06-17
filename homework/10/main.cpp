#include <stdio.h>
#include <string.h>

FILE* bubble_file = fopen("bubble.txt", "w+");
FILE* selection_file = fopen("selection.txt", "w+");
FILE* insertion_file = fopen("insertion.txt", "w+");

const char* bubble_file_first_line_text = "Bubble sort result:\n";
const char* selection_file_first_line_text = "Selection sort result:\n";
const char* insertion_file_first_line_text = "Insertion sort result:\n";
int flag = 0, i;

int bubble_sort(int* arr_input, int n, int* compare_times) {
    //return swap times
    int arr[n] = {0};  //prevent arr will inflect the arr_input, that is don't not modify the raw array
    memcpy(arr, arr_input, n * 4);

    //sorting
    int swap_times = 0;
    *compare_times = 0;
    for (i = (n - 1); i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (arr[j] < arr[j - 1]) {
                swap_times++;
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
            (*compare_times)++;
        }
    }
    if (flag > 3)
        fprintf(bubble_file, "\n");
    else
        fprintf(bubble_file, bubble_file_first_line_text);
    for (i = 0; i < n; i++)
        fprintf(bubble_file, "%d ", arr[i]);
    flag++;
    return swap_times;
}

int selection_sort(int* arr_input, int n, int* compare_times) {
    int arr[n] = {0};  //prevent arr will inflect the arr_input, that is don't not modify the raw array
    memcpy(arr, arr_input, n * 4);

    int swap_times = 0;
    *compare_times = 0;
    for (i = n - 1; i > 0; i--) {
        int max_place = i;  //max has been used by c++ std
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[max_place]) {
                max_place = j;
            }
            (*compare_times)++;
        }
        int tmp = arr[max_place];
        arr[max_place] = arr[i];
        arr[i] = tmp;
        swap_times++;
    }
    if (flag > 3)
        fprintf(selection_file, "\n");
    else
        fprintf(selection_file, selection_file_first_line_text);
    for (i = 0; i < n; i++)
        fprintf(selection_file, "%d ", arr[i]);
    flag++;
    return swap_times;
}

int insertion_sort(int* arr_input, int n, int* compare_times) {
    int arr[n] = {0};  //prevent arr will inflect the arr_input, that is don't not modify the raw array
    memcpy(arr, arr_input, n * 4);

    int swap_times = 0;
    *compare_times = 0;
    for (i = 1; i < n; i++) {
        int index = arr[i], j;
        for (j = i; (j > 0) && (arr[j - 1] > index); j--) {
            arr[j] = arr[j - 1];
            //swap_times ++;    //20181127 TA want correction
            (*compare_times)++;
        }
        arr[j] = index;
        swap_times++;
    }
    //copying and pasting are shameful, but useful.
    if (flag > 2)
        fprintf(insertion_file, "\n");
    else
        fprintf(insertion_file, insertion_file_first_line_text);
    for (i = 0; i < n; i++)
        fprintf(insertion_file, "%d ", arr[i]);
    flag++;
    return swap_times;
}
int main() {
    int tmp, array_500[500] = {0}, array_1000[1000] = {0}, array_2000[2000] = {0};
    FILE* file_pointer;
    file_pointer = fopen("input.txt", "r");
    for (i = 0; fscanf(file_pointer, "%d", &tmp) != EOF; i++) {
        if (i < 500)
            array_500[i] = tmp;
        else if (i < 1500)
            array_1000[i - 500] = tmp;
        else
            array_2000[i - 1500] = tmp;
    }

    int bubble_compare_times = 0, selection_compare_times = 0, insertion_compare_times = 0;

    printf("%8s 1 %11s %18s %15s   \n", "Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_500, sizeof(array_500) / 4, &bubble_compare_times), selection_sort(array_500, sizeof(array_500) / 4, &selection_compare_times), insertion_sort(array_500, sizeof(array_500) / 4, &insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    printf("%8s 2 %11s %18s %15s   \n", "Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_1000, sizeof(array_1000) / 4, &bubble_compare_times), selection_sort(array_1000, sizeof(array_1000) / 4, &selection_compare_times), insertion_sort(array_1000, sizeof(array_1000) / 4, &insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    printf("%8s 3 %11s %18s %15s   \n", "Sequence", "bubble", "selection", "insertion");
    printf("------------------------------------------------------------\n");
    printf("swap times\t%d\t\t%d\t\t%d\n", bubble_sort(array_2000, sizeof(array_2000) / 4, &bubble_compare_times), selection_sort(array_2000, sizeof(array_2000) / 4, &selection_compare_times), insertion_sort(array_2000, sizeof(array_2000) / 4, &insertion_compare_times));
    printf("compare times\t%d\t\t%d\t\t%d\n", bubble_compare_times, selection_compare_times, insertion_compare_times);
    printf("------------------------------------------------------------\n");
    fclose(bubble_file);
    fclose(selection_file);
    fclose(insertion_file);
    return 0;
}
