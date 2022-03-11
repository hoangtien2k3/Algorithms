/*
    return 0 và return 1 là hai giá trị trả về duy nhất của hàm main() trong C.

    +   Chúng ta chỉ đinh return 0 để kết thúc chương trình theo cách bình thường (normal termination). 
        Điều đó có nghĩa là kể cả chương trình có xảy ra lỗi hay không, thì C vẫn ngầm định là 
        chương trình đã được kết thúc mà không có lỗi xảy ra.

    +   Chúng ta chỉ đinh return 1 để kết thúc chương trình theo cách bất thường (abnormal termination). 
        Điều đó có nghĩa là khi chương trình xảy ra lỗi, thì lỗi này sẽ được trả về khi kết thúc 
        chương trình.

*/
// Cách dùng return trong C

#include <stdio.h>
char *checkNum(int num) {
    if (num > 10) {
        return "Gia tri qua lon";
    }
    if (num < 1) {
        return "Gia tri qua nho";
    }
    return "Gia tri trong pham vi tu 1 den 10";
}
int main(void) {
    int num;
    num = 3;
    printf("num = %d, %s\n", num, checkNum(num));
    num = 30;
    printf("num = %d, %s\n", num, checkNum(num));
    num = -3;
    printf("num = %d, %s\n", num, checkNum(num));
    return 0;
}