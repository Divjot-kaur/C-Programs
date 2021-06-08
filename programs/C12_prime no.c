//program to check if a number is prime or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("\nEnter a number = ");
    scanf("%d",&a);
    int count=0;
    for(i=2;i<=a;i++) //in this case we have taken as i = 2 so that 1 is already accounted as the multiple
    {
        if(a%i == 0)
        {
            count++;
        }
    }

    if(count==1)  /* count = 1 as in prime number there are 2 multiples 1 and the number itself
                    prime number is a natural number greater than 1 and that is not a multiple of 2 smaller natural numbers*/
    {
        printf("\n%d is a prime number \n",a);
    }
    else
    {
        printf("\n%d is a NOT prime number \n",a);

    }
    return 0;
}
