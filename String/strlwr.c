/*
    C String Lowercase (chữ thường): strlwr()
    The strlwr(string) function returns string characters in lowercase. Let's see a simple example of strlwr() function.

    Đổi chuỗi ký tự Hoa thành chuỗi ký tự thường

    Uppercase(chữ Hoa) -> Lowercase(chữ thường)
*/
#include<stdio.h>
#include<string.h>

//  Cách 1: dùng hàm "strlwr()" (Lowercase)
void Strlwr (char s1[]) {
    printf ("Chuoi ban s1 ban dau: %s", s1);
    strlwr (s1);
    printf ("\nChuoi chu Hoa: %s", strlwr(s1));
}

int main() {
    char s1[20];
    printf ("Nhap vao chuoi s1: ");
    gets(s1);
    Strlwr(s1);
    return 0;
}

