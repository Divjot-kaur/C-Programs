//program to find whether a number is even or odd using switch case
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter a integer = ");
    scanf("%d",&n);

    switch(n%2)
    {
    case 0:
        printf("\n%d is even \n",n);
        break;
    case 1:
        printf("\n%d is odd \n",n);
        break;
    default:
        printf("\n%d is neither odd nor even \n",n);
        break;
    }
    return 0;
}
