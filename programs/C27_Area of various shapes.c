//area of various shapes using function and a menu driven program
#include <stdio.h>
#include <stdlib.h>
float triangle();
int square();
float circle();
int rectangle();

int main()
{
    int num;
    printf("\n------MENU------\n\n");
    printf("1. Triangle \n");
    printf("2. Square\n");
    printf("3. Circle \n");
    printf("4. Rectangle \n");
    printf("\nEnter a choice : ");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
        printf("\nArea of Triangle = %f \n",triangle());
        break;
    case 2:
        printf("\nArea of Square = %d \n",square());
        break;
    case 3:
        printf("\nArea of Circle = %f \n",circle());
        break;
    case 4:
        printf("\nArea of Rectangle = %d \n",rectangle());
        break;
    default:
        printf("\nInvalid input \n");
        break;
    }
    return 0;
}

float triangle()         //area of triangle
{
    int h,b;
    float a;
    printf("\nEnter height and base of triangle : ");
    scanf("%d %d",&h,&b);
    a = 0.5*h*b;
    return a;
}

int square()            //area of square
{
    int s;
    printf("\nEnter side of square : ");
    scanf("%d",&s);
    return s*s;
}

float circle ()         //area of circle
{
    int r;
    float ar;
    printf("\nEnter radius of circle : ");
    scanf("%d",&r);
    ar = r*(float)r*3.14;
    return ar;
}

int rectangle()         //area of rectangle
{
    int l,b;
    printf("\nEnter length and breath of rectangle : ");
    scanf("%d %d",&l,&b);
    return l*b;
}
