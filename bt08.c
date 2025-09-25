#include <stdio.h>
int main() 
{
     int n, digitNum=0, t;
     do 
     {
         printf("Enter a number: ");
         scanf("%i", &n);
         if (n<0)
         {
             printf("Invaid number! Try again.");
         }    
     }
     while (n<0);
     t = n;
     while (n>0)
     {
         n /= 10;
         ++digitNum;
     }    
     printf("Number %i has %i digits",t,digitNum );        
 return 0;
}