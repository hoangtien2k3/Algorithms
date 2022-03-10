
// Syntax : abs(number): thương được dùng để tìm trị tuyệt đối của số nguyên
// Syntax : fabs(number): để tìm trị tuyệt đối của số thực.

#include <stdio.h>     
#include <math.h>
 
int main ()
{
    printf ("\n%d", abs (3) );
    printf ("\n%d", abs (-10) );

    printf ("\n%f", fabs (3.1416) );
    printf ("\n%.1f", fabs (-10.6) );

    return 0;
}