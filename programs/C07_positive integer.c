//program keeps asking for a positive integer until user enter positive integer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do
    {
        printf("\nEnter a positive integer = ");
        scanf ("%d",&a);
    }while(a<0);
    printf("\nPositive integer = %d\n",a);
    return 0;
}
