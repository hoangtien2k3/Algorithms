
// int pagesNumbering(int n)
// {
//     int digits = (int)(log10(n) + 1); // đếm xem n có bao nhiêu chữ số
//     int res = (n - pow(10, digits-1) + 1) * digits;
//     for (int i = 1; i <= digits - 1; i++)
//     {
//         res += (pow(10, i) - pow(10, i-1)) * i;
//     }
//     return res;
// }