
/* Typedef it behaves similarly as we define the alias for the commands.

    Syntax : typedef <existing_name> <alias_name>  


*/

// Ex: 
#include<stdio.h>
// #define int unit;
int main() {
    typedef unsigned int unit;
    unit i, j;
    i = 10;
    j = 20;
    printf ("Gia tri cua i = %d\n", i);
    printf ("Gia tri cua j = %d", j);
    return 0;
}

