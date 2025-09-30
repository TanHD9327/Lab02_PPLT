#include <stdio.h>
int main() 
{
    int n, i, sum;

// Nhập và kiểm tra n hợp lệ
    do 
    {
        printf("Nhap mot so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) 
        {
            printf("Gia tri khong hop le. Vui long nhap lai!\n");
        }
    } 
    while (n <= 0);

//Dùng for
    sum = 0;
    for ( i = 2 ; i <= n; i+= 2) 
    {
        sum += 1;
    } 
    printf("Tong cac so chan (for): %d\n", sum);
//Dùng while
    sum = 0;
    i = 2;
    while (i <= n) 
    {
        sum += 1;
        i += 2;
    } 
    printf("Tong cac so chan (while): %d\n", sum);
//Dùng do...while
    sum = 0;
    i = 2;
    if (n >= 2) 
    {
        do 
        {
            sum += 1;
            i += 2;
        } 
        while (i <= n);
    } 
    printf("Tong cac so chan (do...while): %d\n", sum);
 return 0;
}