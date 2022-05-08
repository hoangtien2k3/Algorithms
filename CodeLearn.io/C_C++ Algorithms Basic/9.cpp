
/*
    Cho số tự nhiên n.
    Hãy tính số chữ số 0 tận cùng của n! (n! (hay còn gọi là n giai thừa) là tích các số tự nhiên liên tiếp từ 1 tới n)

    Ví dụ:

    Với n = 5, n! = 1*2*3*4*5 = 120, vì vậy numberZeroDigits(n) = 1
    Đầu ra/Đầu vào:

    Đầu vào: integer n
    1 <= n <= 10^12
    Output:
    Số chữ số 0 tận cùng của n!
    Thời gian chạy: 0.5 giây

*/
#include<bits/stdc++.h>

// int solution(int n) {
//     int d = 0;
//     int k = 5;
//     while(k <= n) {
//         d += (n / k);
//         k *= 5;
//     }
//     return d;
// }

int giaithua(int n) {
    if (n == 0 || n == 1) return 1;
    return n * giaithua(n-1);
}

int solution(int n) {
    int count = 0;
    int ans = giaithua(n);
    while(n != 0) {
        if (ans % 10 == 0) {
            count++;
            n /= 10;
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << solution(n);
    return 0;
}