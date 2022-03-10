
#include<stdio.h>
#include<math.h>

#define Pi 3.141692

int main() {
    float a = 30, result;
    result = cos (a*Pi/180);
    printf ("Cos(%.lf) = %lf",a , result);
    return 0;
}