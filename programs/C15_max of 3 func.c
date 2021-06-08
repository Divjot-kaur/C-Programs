//function to find greatest of 3 numbers
#include <stdio.h>
#include <stdlib.h>
int large(int a,int b,int c)
{
    if (a>b && a>c)
        printf("\n%d is largest \n",a);
    else if (b>c && b>a)
        printf("\n%d is largest \n",b);
    else
        printf("\n%d is largest \n",c);
}
int main()
{
   int x,y,z;
    printf("\nEnter 1st number = ");
    scanf("%d",&x);
    printf("\nEnter 2nd number = ");
    scanf("%d",&y);
    printf("\nEnter 3rd number = ");
    scanf("%d",&z);
    large(x,y,z);
}
