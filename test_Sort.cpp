
//! test sort

#include<iostream>
#include<cmath>
#include<string>

int arr[100], n;

// case 1: interchangeSort
void interchangeSort () {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// case 2: bubbleSort
void bubbleSort () {
    for (int i=0; i<n-1; i++) {
        for (int j=n-1; j>i; j--) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

// case 3: selectionSort
void selectionSort () {
    for (int i=0; i<n-1; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}


// case 4: insertionSort
void insertionSort() {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void Output_Array () {
    for (int i=0; i<n; i++) {
        std::cout << arr[i] << "\t";
    }
}


int main() {
    std::cout << "Nhap vao n = ";
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cout << "arr["<< i <<"] = ";
        std::cin >> arr[i];
    }

    int Case;
    char TL;
    do {
        do {
            std::cout << "\nChon Case: ";
            std::cin >> Case;
            if (Case  <= 0 || Case > 4) {
                std::cout << "Error, Nhap lai Case: ";
                std::cout << "\nChon Case: ";
                std::cin >> Case;
            }
        } while (Case < 0 || Case > 4);
        switch (Case) {
            case 1: interchangeSort(); break;
            case 2: bubbleSort(); break;
            case 3: selectionSort(); break;
            case 4: insertionSort(); break;
        }
        Output_Array();
        std::cout << std::endl << "\n";
        std::cout << "Ban co muon tiep tuc (Y, N): ";
        std::cin >> TL;
    } while (TL == 'Y' || TL == 'y'); 
    return 0;
}