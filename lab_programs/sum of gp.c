/*program to find sum of geometric series*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,r,n;

    printf("Enter the first number of gp series = ");
    scanf("%d",&a);                                     /*first term*/
    printf("\nEnter the common difference ratio of gp series = ");
    scanf("%d",&r);                                             /*common ratio*/
    printf("\nEnter the number of terms of gp series = ");
    scanf("%d",&n);                                 /*no. of terms*/

    float sum = 0;
    for(int i=1;i<=n;++i)
    {
        sum += a;
        a = a*r;
    }
    printf("\nSum of the geometric series (gp) is = %f \n",sum);
    return 0;
}
