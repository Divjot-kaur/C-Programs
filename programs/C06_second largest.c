//program to find second largest number of three numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nEnter 1st number = ");
    scanf("%d",&a);
    printf("\nEnter 2nd number = ");
    scanf("%d",&b);
    printf("\nEnter 3rd number = ");
    scanf("%d",&c);

    if((a>b && b>c) || (a<b && c>b))
        printf("\n%d is the second largest \n",b);
    else if ((b>a && c<a) || (a>b && c>a))
        printf("\n%d is the second largest \n",a);
    else
        printf("\n%d is the second largest \n",c);
    return 0;
}
