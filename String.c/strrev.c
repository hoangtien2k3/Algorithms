/*
    The strrev(string) function returns reverse of the given string. Let's see a simple example of strrev() function.
    hàm đảo ngược chuỗi trong C
    Reverse (đảo ngược chuỗi)

*/
#include<stdio.h>
#include<string.h>

void Strrev (char s1[]) {
    printf ("Chuoi s ban dau: %s", s1);
    // strrev (s1);
    printf ("\nChuoi dao nguoc(Reverse): %s", strrev(s1));
}

// Cách 2 : không dùng hàm void Reverse(char *s1)
// {
//     int len = strlen(s1);
//     for (int i = 0; i < len / 2; i++)
//     {
//         int temp = s1[i];
//         s1[i] = s1[len - i - 1];
//         s1[len - i - 1] = temp;
//     }
// }

int main() {
    char s1[20];
    printf ("Nhap vao chuoi s1: ");
    gets(s1);
    Strrev(s1);
    return 0;
}