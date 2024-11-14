#include <stdio.h>
#include <stdlib.h> 

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; 

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }

      
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int n;

    printf("輸入陣列的大小: ");
    scanf_s("%d", &n);

  
    if (n <= 0) {
        printf("陣列大小必須為正數。\n");
        return 1;
    }

    // 動態分配記憶體
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("記憶體分配失敗\n");
        return 1; 
    }

    printf("輸入陣列的元素:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("排序後的陣列: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    free(arr);

    return 0;
}
