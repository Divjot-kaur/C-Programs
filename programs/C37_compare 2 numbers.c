//macros to compare two numbers
#include <stdio.h>
#include <stdlib.h>

#define equal(a,b) (a==b)

int main()
{
    printf("%d\n",equal(5,2));          //compare 2 numbers
    printf("%d\n",equal(5,5));
    return 0;
}
