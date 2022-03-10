
#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main() {
    double param, result;
    param = 30;
    result = tan (param*PI/180);
    printf ("tan(%.0f) = %f", param, result);
    return 0;
}