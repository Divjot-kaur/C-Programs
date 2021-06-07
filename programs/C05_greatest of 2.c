//to find the greatest to 2 numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd number = ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\n%d is greater than %d \n",a,b);
    }
    else
    {
        printf("\n%d is greater than %d \n",b,a);
    }
    return 0;
}
