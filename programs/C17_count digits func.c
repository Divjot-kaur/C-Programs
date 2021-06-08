//function to count number of digits
#include <stdio.h>
#include <stdlib.h>
int countdigit(int n)
{
    int counter=0;
    while(n != 0)
    {
        counter++;
        n = n/10;
    }
    return counter;
}
int main()
{
    int a,num;
    printf("\nEnter a number = ");
    scanf("%d",&a);
    if (a < 0)
    {
        num = -1*a;
    }
    else
    {
        num = a;
    }
    printf("\nNumber of digits is = %d \n",countdigit(num));
    return 0;
}
