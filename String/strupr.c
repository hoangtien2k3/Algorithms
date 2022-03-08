/*
    The strupr(string) function returns string characters in uppercase. Let's see a simple example of strupr() function.

    C String Uppercase: strupr()

    Chuyển các ký tự dạng chữ thường thành chữ Hoa

    Lowercase(chữ thường) -> Uppercase(chữ Hoa)
*/
#include<stdio.h>
#include<string.h>

// Uppercase : chữ Hoa
void Strupr (char s1[]) {
    printf ("Chuoi chu thuong s1 ban dau: %s", s1);
    printf ("\nChuoi chu Hoa: %s", strupr(s1));
}
int main() {
    char s1[20];
    printf ("Nhap vao chuoi s1: ");
    gets(s1);
    Strupr(s1);
    return 0;
}