
// VD: 12 = 2 * 2 * 3

#include<stdio.h>
#include<math.h>

int NguyenTo (int n) {
    if (n < 2) 
        return 0;
    for(int i=2; i<=n ; i++) {
        while(n % i == 0) {
            n /= i;
            if (n > 1) {
                printf("%d * ", i);
            } else {
                printf("%d", i);
            }
        }
    }
}

int main() {    
    int n;
    printf("Nhap vao n = ");
    scanf("%d", &n);
    NguyenTo(n);
    return 0;
}