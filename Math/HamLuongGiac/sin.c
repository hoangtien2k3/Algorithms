

#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main() {
    double param, result;
    param = 30;
    result = sin (param*PI/180);
    printf ("sin(%.0f) = %.4f", param, result);
    return 0;
}