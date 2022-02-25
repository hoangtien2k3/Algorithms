/*
    The strcmp(first_string, second_string) function compares two string and returns 0 if both strings are equal.
    So sánh xem hai chuỗi s1 = s2 không
*/

#include<stdio.h>
#include<string.h>

void Strcmp (char s1[], char s2[]) {
    if (strcmp(s1, s2) == 0) {
        printf ("Hai chuoi bang nhau");
    } else {
        printf ("Hai chuoi khong bang nhau");
    }
}
int main() {
    char s1[20], s2[20];
    printf("Nhap vao chuoi s1: ");
    gets(s1);
    printf("Nhap vao chuoi s2: ");
    gets(s2);
    Strcmp (s1, s2);
    return 0;
}