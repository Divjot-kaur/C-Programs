//Perfect number function
//a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
#include <stdio.h>
#include <stdlib.h>
int perfect(int n)
{
    int i,sum=0;
    printf("\n%d is a ",n);
    for(i=1;i<n;++i)
    {
        if((n%i) == 0)
        {
           sum += i;
        }
    }
    if (n == sum)
        printf("Perfect number \n");
    else
        printf("NOT a Perfect number \n");
    return 0;
}
int main()
{
    int a;
    printf("\nEnter a number = ");
    scanf("%d",&a);

    perfect(a);

    return 0;
}
