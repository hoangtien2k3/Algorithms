// bubble sort


#include<stdio.h>

void bubbleSort (int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--) 
        {
            if (arr[j] < arr[j - 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

// void bubbleSort(int array[], int n)
// {
//     for (int i = 0; i < n - 1; i++) // i bắt đầu từ đầu dãy // i = 0
//     {
//         for (int j = 0; j < n - i - 1; j++) // j bắt đầu từ đầu dãy // j = 0 // 1 // // 2 // 3 // 4
//         {
//             if (array[j] > array[j + 1])
//             {
//                 int temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

int main() {
    int arr[] = {5, 7, 19, 4, 23, 45, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort (arr, n);
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}