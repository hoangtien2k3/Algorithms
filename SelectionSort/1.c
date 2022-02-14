
// SelectionSort : sắp xếp lựa chọn

#include<stdio.h>
#include<math.h>

void selectionSort (int a[], int n) {
    int min;
    for (int i=0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n ; j++) {
            if (a[j]  < a[min]) {
                min = j; // ghi nhận vị trí phần tử nhỏ nhất
            }
        }
        if (min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

int main() {
    int a[100], n;
    printf ("Nhap so phan tu: n = ");
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    selectionSort(a,n);
    for (int i=0; i<n; i++) {
        printf ("%d ", a[i]);
    }
    return 0;
}