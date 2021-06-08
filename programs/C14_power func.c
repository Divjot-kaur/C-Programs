// function pow(x,y) , it returns the value x to power y
#include <stdio.h>
#include <stdlib.h>
int pow(int x,int y)
{
    int i,power=1;
    for (i=1;i<=y;++i)
    {
        power = x*power;
    }
    return power;
}

int main()
{
    int a,b;
    printf("\nEnter value of a and b = ");
    scanf("%d %d",&a,&b);

    printf("\n%d^%d = %d\n",a,b,pow(a,b));
    return 0;
}
