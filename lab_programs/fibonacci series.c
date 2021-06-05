//to print fibonacci series using recursion
#include <stdio.h>
#include <stdlib.h>
void fibonacci(int old,int current,int terms)
{
    int newterm;
    if(terms >= 1)
    {
        newterm = old + current;
        printf("%d\n",newterm);
        terms = terms -1;
        fibonacci(current,newterm,terms);   //recalling the function
    }
}
int main()
{
   int t,old=0,current=1;
   printf("No. of terms of fibonacci series = ");
   scanf("%d",&t);
   printf("%d\n%d\n",old,current);
   fibonacci(old,current,t-2);
   return 0;
}
