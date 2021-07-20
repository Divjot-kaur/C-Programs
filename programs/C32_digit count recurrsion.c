//digit count using recurrsion
#include <stdio.h>
#include <stdlib.h>
int count=0;
void digits(int num)
{
    if(num!=0)
    {
        count++;
        digits(num/10);
    }
}
int main()
{
    int num;
    printf("\nEnter a number ");
    scanf("%d",&num);
    digits(num);
    printf("\nNo. of digits = %d\n",count);
}
