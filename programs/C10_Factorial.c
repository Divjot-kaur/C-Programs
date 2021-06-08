//factorial of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact=1,n;

   printf("\nEnter value of n = ");
   scanf("%d",&n);

   for(i=1 ; i<=n ; ++i)
        {
            fact *= i;
        }
    printf("\nFactorial of %d = %d\n",n,fact);
    return 0;
}
