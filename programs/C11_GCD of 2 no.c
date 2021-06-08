//program to find greatest common divisor(GCD) of 2 numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,gcd=0;

    printf("\nEnter 2 numbers = ");
    scanf("%d%d",&a,&b);

     for (i=1 ; i<=a && i<=b ; i++ )
     {
         if(a%i == 0 && b%i == 0)       //to check if a&b is divisible by i
         {
             gcd = i;
         }
     }
     printf("\nGCD of %d & %d = %d\n",a,b,gcd);
     return 0;
}
