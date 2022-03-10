
// Hàm exp() - Tính e^x

#include<stdio.h>
#include<math.h>

int main() {
    double param, result;
    param = 5.0;
    result = exp(param); // exp(param) = e^(5.0) = 148.4131591
    printf ("e^%.lf = %lf", param, result);
    return 0;
}