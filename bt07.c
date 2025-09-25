#include <stdio.h>
int main() 
{
    int n, t, product = 1, r;
    do
    {
        printf("Enter a number: ");
        scanf_s("%i", &n);

        if (n < 10)
        {
            printf("Invalid number! Try again.\n");
        }

    }while (n < 10);
     
    t = n;
    while (n > 10) 
    {
                r = n % 10;
                product *= r;
                n /= 10;
    }
    printf("Product of digits of %i is %i", t, product);
    
    return 0;
}
