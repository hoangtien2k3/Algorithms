
// BinarySearch: thuật toán tìm kiếm nhị phân
// bắt buộc phải cần mảng sắp xếp tăng dần thì mới tìm kiếm được bằng BinarySearch


#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

// dùng hàm thông thương
// bool BinarySearch(int arr[], int left, int right, int x) { // O(log N)
//     while(left <= right) {
//         int mid = (left + right) / 2; // mid = left + (left + right) / 2;
//         if (arr[mid] == x) {
//             return true;
//         } else if (arr[mid] < x) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return false;
// }


// dùng đệ quy
bool binary_search(int arr[], int left, int right, int x) {
    if (left >= right)
        return false;
    int mid = (left + right) / 2;
    if (arr[mid] == x)
        return true;
    else if (arr[mid] < x)
        return binary_search(arr, mid + 1, right, x);
    else 
        return binary_search(arr, left, mid - 1, x);
}  


int main() {
    int n; cin >> n; // n phần tử
    int arr[100];
    int x; cin >> x;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    if (binary_search(arr, 0, n - 1, x)) 
        cout << "true";
    else 
        cout << "false";


    return 0;
}