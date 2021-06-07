//Calculator used to find sum,difference,multiple,divide of 2 numbers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char op;
    float num1,num2;
    printf("\nEnter 2 numbers = ");
    scanf("%f %f",&num1,&num2);

    printf("Enter the operation u want to perform = ");
    scanf("%s",&op);

    switch(op)
    {
    case '+' :                                          //sum
        printf("\n%f + %f = %f \n",num1,num2,num1+num2);
        break;
    case '-' :                                          //subtraction
        printf("\n%f - %f = %f \n",num1,num2,num1-num2);
        break;
    case '*' :                                          //multiplication
        printf("\n%f * %f = %f \n",num1,num2,num1*num2);
        break;
    case '/' :                                          //division
        printf("\n%f / %f = %f \n",num1,num2,num1/num2);
        break;
    default:
        printf("\nIncorrect input ");
        break;
    }
}
