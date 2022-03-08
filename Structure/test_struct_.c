

#include<stdio.h>
#include<string.h>

struct employee {
    int id;
    char name[20];
    float salary;
} e1,e2; // declaring e1 and e2 variables for structure 

int main() {
    // first employee information
    e1.id = 101;
    strcpy (e1.name, "Hoang Anh Tien"); // copy
    e1.salary = 550000;

    // second employee information
    e2.id = 102;
    strcpy (e2.name, "Tien Anh Hoang");
    e2.salary = 126000;

    // printing first employee information  
    printf( "employee 1 id : %d\n", e1.id);    
    printf( "employee 1 name : %s\n", e1.name);    
    printf( "employee 1 salary : %f\n", e1.salary); 

    printf ("\n");

    // printing second employee information  
    printf( "employee 2 id : %d\n", e2.id);     
    printf( "employee 2 name : %s\n", e2.name);    
    printf( "employee 2 salary : %f\n", e2.salary);

    
    return 0;
}