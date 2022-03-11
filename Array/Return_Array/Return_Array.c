
/*
    RETURN AN ARRAY IN C: 
    + using dynamically allocated array
    + using static array
    + using structure
*/
// #include<stdio.h>
// #include<string.h>

// int *getsArray (int *a) {
//     for (int i=0; i<5; i++) {
//         scanf ("%d", &a[i]);
//     }
//     return a;
// }

// int main() {
//     int arr[5];
//     getsArray(arr);
//     for (int i=0; i<5; i++) {
//         printf ("%d ", arr[i]);
//     }
//     return 0;
// }

//////////////////

//  Return array using malloc() function.
#include <stdio.h>  
#include<malloc.h>  
int *getarray()  
{  
    int size;  
    printf("Enter the size of the array : ");  
    scanf("%d",&size);  
    int *p = (int*) malloc(size*sizeof(int));  
    // int *p = malloc (size);
    printf("\nEnter the elements in an array: ");  
    for(int i=0;i<size;i++)  
    {  
        scanf("%d",&p[i]);  
    }  
    return p;  
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
