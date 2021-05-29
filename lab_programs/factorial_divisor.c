/*a menu driven code to find factorial and divisor of a number */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    printf("\n-------MENU-------\n");
    printf("\n1. Factorial\n");
    printf("\n2. Divisor\n");
    printf("\nEnter your choice : ");
    scanf("%d",&b);
    printf("\n");

    switch(b)
    {
    case 1:                 /*program to find factorial*/
       {
        int i,fact=1,n;

        printf("Enter value of n = ");
        scanf("%d",&n);

        for(i=1 ; i<=n ; ++i)
        {
            fact *= i;
        }
        printf("\nFactorial of %d = %d \n",n,fact);
       }
        break;

    case 2:                 /*program to find divisor*/
        {
        int i,n;
        printf("Enter a number = ");
        scanf("%d",&n);
        printf("\nDivisors of %d : \n",n);
        for(i=1;i<=n;++i)
        {
            if((n%i) == 0)
            {
                printf("\n\t\t%d \n",i);
            }
        }
        }
        break;

    default:
        printf("Incorrect Input \n");
    }
    return 0;
}
