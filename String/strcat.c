// The strcat(first_string, second_string) function concatenates two strings and result is returned to first_string.
/*
    strcat(first_string, second_string)
    cat : Concatenation : sự kết hợp
*/
#include<stdio.h>
#include<string.h>

void Strcat (char s1[], char s2[]) {
    strcat(s1, s2);
    printf ("Gia tri chuoi s1: %s", s1);
}

int main() {
    char s1[] = "HOANG ANH ";
    char s2[] = "TIEN";
    Strcat(s1, s2); 
    return 0;
}