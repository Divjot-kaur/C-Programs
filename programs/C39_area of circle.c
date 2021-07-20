//average to find area of circle
#include <stdio.h>
#include <stdlib.h>

#define pi 3.1428
#define area_circle(x) (x*x*pi)

int main()
{
    int y;
    float area = 0;
    printf("enter radius = ");
    scanf("%d",&y);
    area = area_circle(y);
    printf("area = %f",area);
}
