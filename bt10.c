#include <stdio.h>
int main() 
{
     int n, p=1, newNum=0, r, t, c=0;       
     do
     {
        printf("Enter a number: ");
        scanf("%d",&n);
        if (n<10)
        {
           printf("The number must be greater than 0");
        }
     }   
     while (n<10);
     
     while (n>0)
     {
        r = n % 10;
        newNum += r*c;
        c *= 10;
        n/=10;
     }
     printf("%d", newNum);     
 return 0;
}