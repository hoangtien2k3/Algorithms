
/*
    + Data Structure Alignment: Data Structure is the way data is arranged and accessed in computer memory. 
        Có nghĩa là khi data load lên memory sẽ được CPU sắp xếp lại để tiện cho việc truy xuất 
        tối ưu nhất có thể.


    + Data alignment: sắp xếp data sao cho địa chỉ của các biến luôn là số chẵn và phù hợp với hệ thống
    + Data padding: để làm được việc alignment như ở trên chúng ta cần phải “padding” 
        thêm một số byte vào sau biến “char c” để khi đó biến “int i” có thể ở địa chỉ chẵn
*/

#include <stdio.h>

struct abc {
   char a;
   int b;
   char c;
};

int main() {
   struct abc var;
   printf ("%d", sizeof(var));
}
