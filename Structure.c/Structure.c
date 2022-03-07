
// Các cách để khai báo 1 kiểu STRUCT trong c

#include<stdio.h>
#include<string.h>

// cách 1: struct
struct solution {
    int n;
    char a[10];
};
int main() {
    struct solution p1;
    printf ("Nhap vao n: ");
    scanf ("%d", &p1.n);
    printf ("n = %d", p1.n);
}


// cách 2: struct : hay nhất
struct solution {
    int n;
    char a[10];
} p1;
int main() {
    printf ("Nhap vao n: ");
    scanf ("%d", &p1.n);
    printf ("n = %d", p1.n);
}


// cách 3: typedef struct
typedef struct {
    int n;
    char a[10];
} solution;
int main() {
    solution p1;
    printf ("Nhap vao n: ");
    scanf ("%d", &p1.n);
    printf ("n = %d", p1.n);
}


// cách 4: typedef struct
struct solution{
    int n;
    char a[10];
};
typedef struct solution solution;
int main() {
    // typedef struct solution solution;
    solution p1;
    printf ("Nhap vao n: ");
    scanf ("%d", &p1.n);
    printf ("n = %d", p1.n);
}

// cách 5: typedef struct
typedef struct solution {
    int n;
    char a[10];
} solution;
int main() {
    solution p1;
    solution p1;
    printf ("Nhap vao n: ");
    scanf ("%d", &p1.n);
    printf ("n = %d", p1.n);
}



// example: information employee e1 and e2 
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