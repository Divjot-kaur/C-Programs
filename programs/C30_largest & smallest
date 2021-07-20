//oldest and youngest using pointers
#include <stdio.h>
#include <stdlib.h>
void l_s(int *a,int *b,int *c)
{

    if(*a>*b && *a>*c)
        {
            printf("a is oldest \n");
            if(*b>*c)
                printf(" c is youngest");
            else
                printf(" b is youngest");
        }

    else if(*b>*c && *b>*a)
       {
        printf("b is oldest");
        if(*a>*c)
            printf(" c is youngest");
        else
            printf(" a is youngest");
       }
    else
        {
        printf("c is oldest");
        if(*a>*b)
            printf(" b is youngest");
        else
            printf(" a is youngest");
            }
        }

int main()
{

    int x,y,z;

    printf("enter 3 ages :");
    scanf("%d %d %d",&x,&y,&z);
    printf("%d %d %d \n",x,y,z);
    l_s(&x,&y,&z);
}
