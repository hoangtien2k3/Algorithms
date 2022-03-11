
/*
    RETURN AN ARRAY IN C: 
    + using dynamically allocated array : sử dụng mảng được cấp phát động trong C
    + using static array : sử dụng mảng tỉnh 
    + using structure : sử dụng cấu trúc struct

*/

// Cách 1: using dynamicall allocated array
// Return array using malloc() function.
#include <stdio.h>  
#include<malloc.h>  
int *getarray()  
{  
    int size;  
    printf("Enter the size of the array : ");  
    scanf("%d",&size);  
    int *arr = (int*) malloc(size*sizeof(int));  
    // int *p = malloc (size);
    printf("\nEnter the elements in an array: ");  
    for(int i=0;i<size;i++)  
    {  
        scanf("%d",&arr[i]);  
    }  
    return arr;  
}  
int main()  
{  
    int *ptr;  
    ptr = getarray();  
    int length = sizeof(*ptr);  
    printf("Elements that you have entered are : ");  
    for(int i=0;i<length;i++)  
    {  
        printf("%d ", ptr[i]);  
    }  
    return 0;  
}  


/////
// cách 2: using static array: sử dụng mảng tỉnh (static)
#include<stdio.h>
int *getarray () {
    static int arr[5];
    printf ("Enter the element an array: ");
    for (int i = 0; i < 5; i++) {
        scanf  ("%d", &arr[i]);
    }
    return arr;
}
int main() {
    int *ptr, length;
    ptr = getarray();
    printf ("\nElement that you have entered in array: ");
    for (int i = 0; i < 5; i++) {
        printf ("%d ", ptr[i]);
    }
}


/////
// Cách 3: using Structure: sử dụng cấu trúc
/* 

truct Operator fun()
{
    struct Operador items[3];
     ...
    return items[n];
} 

*/
#include<stdio.h>
#include<string.h>

struct array {
    int arr[5];
};

struct array getarray() {
    struct array p1;
    printf ("Enter the elements an array: ");
    for (int i=0; i<5; i++) {
        scanf ("%d", &p1.arr[i]);
    }
    return p1;
}

int main() {
    struct array x = getarray();
    printf ("Elements that you have entered in array: ");
    for (int i = 0; i < 5; i++) {
        printf ("%d ", x.arr[i]);
    }
    return 0;
}