
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *getarray(int x) {
    int *arr = malloc (x * sizeof(int));
    for (int i = 0; i < x; i++) {
        arr[i] = x + i + 1;
    }
    return arr;
}

int main() {
    int x = 7;  
    int *ptr = getarray(x);
    for (int i = 0; i < x; i++) {
        printf ("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}

