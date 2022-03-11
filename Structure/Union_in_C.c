/*
    + Cũng giống như structure, union trong C là kiểu dữ liệu do người dùng định nghĩa 
      được sử dụng để chứa các loại phần tử khác nhau.

*/
// Sự khác nhau giữa Union và Structure trong C/C++

#include <stdio.h>
#include <string.h>
 
union Employee {
    int id;
    char name[50];
} e1; // khai bao bien e1 cho Employee

int main() {
    e1.id = 101;
    strcpy(e1.name, "HOANG TIEN"); 
    printf("employee e1 id: %d\n", e1.id);
    printf("employee e1 name: %s\n", e1.name);
    return 0;
}

/*
    Khi chạy chương trình thì: Như bạn thấy, id lấy giá trị rác 
    vì tên có kích thước bộ nhớ lớn. Vì vậy, chỉ tên sẽ có giá trị thực tế.
*/

