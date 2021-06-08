// function to reverse a number
#include <stdio.h>
#include <stdlib.h>
int rev(int t)
{
    int last_digit=0,reversed=0;
    while(t>0)
    {
        last_digit=t%10;
        reversed = reversed*10 + last_digit;
        t=t/10;
    }
    return reversed;
}
int main()
{
    int a;
    printf("\nEnter a number = ");
    scanf("%d",&a);
    printf("\nReverse of %d = %d\n",a,rev(a));
    return 0;
}
