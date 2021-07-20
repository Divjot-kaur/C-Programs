//reverse and factorial using pointers
#include <stdio.h>
#include <stdlib.h>
int factorial(int *n)
{
    int i,fact=1;
    for(i=1 ; i<=*n ; ++i)
    {
        fact *= i;
    }
    return fact;
}

int rev(int *t)
{
    int last_digit=0,reversed=0;
    while(*t>0)
    {
        last_digit= *t%10;
        reversed = reversed*10 + last_digit;
        *t = *t/10;
    }
    return reversed;
}
int main()
{
    int a,b;
    printf("enter a number to find factorial = ");
    scanf("%d",&a);
    printf("factorial of %d = %d \n",a,factorial(&a));
    printf("enter a number to be reversed= ");
    scanf("%d",&b);
    printf("%reverse of %d = %d",b,rev(&b));

    return 0;
}
