#include<stdio.h>
int main() 
{
 int n, t, sodu,sum = 0;
 do {
     printf("Enter a number: ");
     scanf("%i", &n);
     if (n<0){
        printf("Invalid number! Use other number.\n"); 
     } 
 } while (n<0);
 t = n;
 while (n>0){
     sodu = n%10;
     sum += sodu;
     n /= 10;
 }    
 printf("Sum of digits in %i is %i.", t, sum);     
 return 0;
}