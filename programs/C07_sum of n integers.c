//program to find out sum of first n integers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("\nEnter value of n = ");
    scanf("%d",&n);

    for(i=0; i<=n ; ++i)
       {
           sum += i;
       }
    printf("\nSum of first n integers = %d \n",sum);
    return 0;
}
