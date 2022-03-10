 
// Union trong C : là kiểu dữ liệu do người dùng tự định nghĩa, dùng để chứa các toán tử khác nhau

// Sự khác nhau giữa Union và Structure trong C/C++

#include<stdio.h>
#include<string.h>
// # Ex: Structure
struct employee {
    int id;     // size 1 bytes
    char name[10];  // size 2 byte
    float salary;   // size 4 bytes
} e1; // size of e1 = 7 bytes

int main() {
    // printf ("id = %d\nName = %d\nSalary = %d\n", sizeof(e1.id), sizeof(e1.name), sizeof(e1.salary));
    printf ("%d", sizeof(e1.id));
    printf ("\n%d", sizeof(e1.name));
    printf ("\n%d", sizeof(e1.salary));
    return 0;
}

// # Ex: Union
// union employee {
//     int id;     // size 1 bytes
//     char name[10];     // size 2 byte
//     float salary;      // size 4 bytes
// } e1; // size of e1 = 4 bytes


