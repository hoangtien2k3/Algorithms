
/*
    * Struct lồng nhau trong C
    Có 2 cách để định nghĩa cấu trúc lồng nhau trong C:
        1. Cấu trúc riêng biệt
        2. Cấu trúc nhúng

*/

/*
    1. Cấu trúc riêng biệt
    struct Date {
        int day;
        int month;
        int year;
    };
    struct employee {
        char name[20];
        int id;
        struct Date birthday;
    } emp1;
*/

/*
    2. cấu trúc nhúng
    struct employee {
        char name[20];
        int id;
        struct Date {
            int day;
            int month;
            int year;
        } birthday;
    } emp1;
*/

1. Cấu trúc riêng biệt:
#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter employee information\n");  
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);  
    printf("Printing the employee information....\n");  
    printf("Name: %s\nCity: %s\nPincode: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);  
} 

2. Cấu trúc nhúng:
#include<stdio.h>

struct employee 
{
    char name[20];
    struct address 
    {
        char city[20];
        int pin;
        char phone[14];
    } add;
} emp;
void main() {
    printf ("Enter employee information: \n");
    scanf ("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    printf ("Printing the emplyee infromation ... \n");
    printf ("Name: %s\nCity: %s\nPincode: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
    return;
}