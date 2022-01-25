/*
    Bubble Sort: // sắp xếp nổi bọt : nghĩa là sau mỗi vòng lặp i và j thì giá trị nhỏ hơn nó sẽ nổi lên trên đầu
    Ý tưởng:
        + Xuất phát từ cuối dãy, đổi chỗ các cặp phần tử kế cận để đưa phần tử nhỏ hơn 
          trong cặp phần tử đó về vị trí đầu dãy hiện hành, sau đó sẽ không xét đến nó ở bước tiếp theo

        + Ở lần xử lý thứ i có vị trí đầu dãy là i

        + Lặp lại xử lý trên cho đến khi không còn cặp phần tử nào để xét

*/

#include<stdio.h>

void swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// 64, 34, 25, 12, 22, 11, 90 -> 7
// 0    1   2   3   4   5   6

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) { // i bắt đầu từ đầu dãy // i = 0
        for (int j = n - 1; j > i; j--) { // j bắt đầu từ cuối dãy // j = 6 // 5 // 4 // 3 // 2 // 1
            if (arr[j] < arr[j - 1]) {
                swap (&arr[j], &arr[j - 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf ("%d  ", arr[i]);
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}