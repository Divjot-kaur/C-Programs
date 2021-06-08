//program to check if a number is palindrome or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reversed=0,last_digit;

    printf("\nEnter a number = ");
    scanf("%d",&n);
    int t = n;       //t is a temporary variable
    while(t != 0)           //to find reverse of number
    {
        last_digit = t%10;
        reversed = reversed*10 + last_digit;
        t = t/10;
    }

    if (reversed == n)          //to check if reverse = number
    {
        printf("\n%d is a palindrome number \n",n);
    }
    else
    {
        printf("\n%d is NOT a palindrome number \n",n);

    }
    return 0;
}
