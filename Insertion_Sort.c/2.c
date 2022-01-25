// Intertion Sort : sắp xếp chèn

#include<stdio.h>

// 4, 2, 8, 0, 5, 11, 20, 9 -> n = 8
// 0  1  2  3  4   5   6  7

void InsertionSort(int a[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    { //đoạn a[0] đã sắp
        x = a[i]; // gán x = a[1]
        pos = i; 
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1]; // đổi chỗ
            pos--;
        }
        a[pos] = x;
    }
}



int main() {
    int a[] = {4, 2, 8, 0, 5, 11, 20, 9};
    int n = sizeof (a)/ sizeof(a[0]);
    InsertionSort(a, n);
    for (int i=0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}