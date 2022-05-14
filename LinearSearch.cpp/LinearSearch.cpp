
// LinearSearch : thuật toán tìm kiếm tuyến tính
/*
    Ex: 
        4
        1 2 3 4
        4

    => solution = 1;

*/
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

bool LinearSearch(int arr[], int n, int x) { // O(n)
    for(int i=0; i<n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int x; cin >> x;

    cout << LinearSearch(arr, n, x) << endl;

    return 0;
}