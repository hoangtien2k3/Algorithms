
// Hàm logarit - log()

#include<stdio.h>
#include<math.h>

int main() {
    double param, result;
    param = 5.5;
    result = log(param); // exp(param) = e^(5.5)
    printf ("log(%.1lf) = %lf", param, result);
    return 0;
}