
// Interchange sort

/*
    Ý tưởng:
    * Bắt đầu từ phần tử ở vị trí đầu, tính từ vị trí đoạn chưa được sắp xếp,
    so sánh với các phần tử còn lại trong danh sách.
    - Trong các cặp so sánh, nếu phần tử ở vị trí đầu lớn hơn phần tử ở vị trí sau thì sẽ hoán vị.
    - Ngược lại, phần tử sau lớn hơn thì không hoán vị.

    CÁC BƯƠC:
        Bắt đầu từ vị trí đầu tiên i = 0 trong danh sách a[]
            Lặp cho đến khi i < n - 1.
                * Xét phần tử tại vị trí j = i + 1
                    Lặp trong khi j < n
                    + Nếu a[i] > a[j] thì hoán đổi giá trị của của a[i] và a[j]
                    + j++
                * i++
*/

void interchangeSort(int a[], int size)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        for (int j = i + 1; j < arr.length; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}