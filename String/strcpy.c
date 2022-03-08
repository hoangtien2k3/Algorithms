// The strcpy(destination, source) function copies the source string in destination.
/* syntax: strcpy(destination, source)
        destination: nơi đến
        source : nguồn

    // Strcpy : là hàm copy chuỗi s1 sang chuỗi s2
*/

#include<stdio.h>
#include<string.h>

void Strcpy (char s1[], char s2[]) {
    strcpy(s2, s1);
    printf("Gia tri chuoi s2: %s", s2);
}

int main() {
    char s1[20] = "HOANG ANH TIEN";
    char s2[20];
    Strcpy (s1, s2);
    return 0;
}

