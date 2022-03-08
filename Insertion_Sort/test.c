
// interchange sort

#include<stdio.h>
#include<math.h>

// interchange sort : sắp xếp đổi chỗ trực tiếp
void interchangeSort (int a[], int n) {
    for (int i=0; i<n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// bubble sort : sắp xếp nổi bọt
void bubbleSort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}


int main() {
    int a[] = {7, 9, 4, 10, 44, 68, 200, 43, 90}
}