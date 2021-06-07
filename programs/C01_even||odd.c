//program to find whether a number is even or odd
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter a integer = ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("\n%d is even \n",n);
    }
    else
    {
        printf("\n%d is odd  \n",n);
    }
    return 0;
}
