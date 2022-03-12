
//  tạo con trỏ và mảng
#include <stdio.h>  
void printarray(char *arr)  
{  
    for(int i=0;i<5;i++)  
    {  
        printf("%c ", arr[i]);  
    }  
}  
int main()  
{  
    char a[5]={'A','B','C','D','E'};
    printarray(a);  // (a) vì mảng ký tự bản thân nó là 1 địa chỉ rồi, nên chỉ cần truyền vào biến 'a'
    return 0;  
}  


// void abc(int a) {

// }
// ///////////////////////////////
#include<stdio.h>
int ros9 (int *a) {
    ++*a;
    return *a;
}
int main() {
    int n = 5;
    printf ("n = %d", n);
    ros9 (&n); // &n vì n là số nguyên, nên cần truyền cho nó 1 địa chỉ
    printf ("\nn = %d", n);
    return 0;
}


