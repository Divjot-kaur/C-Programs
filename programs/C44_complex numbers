//addition,subtraction,multiplication&division of complex numbers
#include <stdio.h>
#include <stdlib.h>
struct complexs
{
    int real;
    int imaginary;
}c1,c2,sum,sub,mul;
void input()
{
    printf("Enter first complex number real and imaginary part : ");
    scanf("%d%d",&c1.real,&c1.imaginary);
    printf("Enter second complex number real and imaginary part : ");
    scanf("%d%d",&c2.real,&c2.imaginary);
}
void sums()
{
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
}
void diff()
{
    sub.real = c1.real - c2.real;
    sub.imaginary = c1.imaginary - c2.imaginary;
}
void muls()
{
    mul.real = (c1.real*c2.real) + ((-1)*c1.imaginary*c2.imaginary);
    mul.imaginary = (c1.real*c2.imaginary) + (c2.real*c1.imaginary);
}
void output()
{
    printf("sum = %d + %di \n",sum.real,sum.imaginary);
    printf("difference = %d + %di \n",sub.real,sub.imaginary);
    printf("multiplication = %d + %di \n",mul.real,mul.imaginary);
}
int main()
{
    input();
    sums();
    diff();
    muls();
    output();
    return 0;
}
