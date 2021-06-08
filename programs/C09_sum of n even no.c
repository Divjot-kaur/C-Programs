//program to find sum of first n even numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0,n;

   printf("\nEnter value of n = ");
   scanf("%d",&n);

   for(i=1 ; i<=n ; ++i)
        {
            if( i%2 == 0)           //checks if number is even or not
            {
                sum += i;
            }
        }
    printf("\nSum of even numbers = %d\n",sum);
    return 0;
}
