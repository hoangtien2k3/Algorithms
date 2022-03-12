
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

/*
    +   Khi khai báo mảng tĩnh, kích thước mảng phải được xác định tại thời điểm biên dịch và 
        không bao giờ thay đổi.

    +   Cấp phát động một mảng cho phép chúng ta xác định kích thước mảng trong thời gian 
        chạy chương trình

    *** Để cấp phát và thu hồi mảng động, C++ cung cấp toán tử new[] và delete[]

*/

/*
    int fixedArray[]{1, 2, 3}; // Đúng

    int *DynamicArray1 = new int[] {1, 2, 3}; // Sai

    int *DynamicArray2 = new int[3] {1, 2, 3}; // Đúng

    int *array = new int[10](); // mảng động có 10 phần tử

*/

int main() {
    int length;
    printf("Nhap vao chieu dai mang: ");
    scanf ("%d", &length);

    int *array = new int[length]; // kích thước của mảng có thể là biến số


    delete[] array; // trả lại vùng nhớ mảng array cho hệ điều hành

    return 0;
}


///////////////////
/*
    thay đổi kích thước mảng động:
    + Bước 1: cấp phát động một mảng mới 
    + Bước 2: sao chép các phần tử từ mảng cũ sang mảng mới
    + Bước 3: Xóa mảng cũ

*/

int main()
{
	int size = 3;
	// cấp phát động và khởi tạo mảng 3 phần tử
	int *array = new int[size]{ 3, 5, 7 };

	int newSize = 6;
	// cấp phát động mảng mới 6 phần tử
	int *resize = new int[newSize];

	// sao chép phần tử
	for (int i = 0; i < size; i++)
	{
		resize[i] = array[i];
	}

	delete[] array; // Xóa mảng hiện tại

	array = resize; // Trỏ sang mảng đã resize
	size = newSize; // kích thước mảng mới

	// sử dụng mảng array đã resize
	// ...

	delete[] array; // Thu hồi mảng

	system("pause");
	return 0;
}



