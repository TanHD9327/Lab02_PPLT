#include <stdio.h>
int main()
{
    int n, first_digit, last_digit, t, newNum, c=0;
    
    do
    {
        printf("Enter a number that has 2 or more digits: ");
        scanf("%d", &n);        
        if (n<10)
        {
            printf("Invalid number! Please try other number.\n");
        }
    } while (n<10);
    last_digit = n % 10;
    t = n;
    c = 1;
    while (n>=10)
    {
        n = n / 10;
        c = c * 10;
    }
    first_digit = n;
    newNum = t - last_digit - first_digit*c + first_digit + last_digit*c;
    printf("New number is %d", newNum);
    return 0;
}