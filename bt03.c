#include<stdio.h>
int main() 
{
   int n, tich, thutu = 1;
   printf("Nhap so n: ");
   scanf("%d", &n);
   printf("\nBang cuu chuong %d: ", n);
   while (thutu <=10){
        printf("\n%d x %d = %d",n,thutu, n*thutu);
        thutu++;
   }
  return 0;
}