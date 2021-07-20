/*
Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
*/

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[10];
    int account;
    int balance;
}s[10];

void input(int n)
{
  for(int i=0;i<n;++i)
  {
    printf("Enter name : ");
    scanf("%s",&s[i].name);
    printf("Enter account number : ");
    scanf("%d",&s[i].account);
    printf("Enter balance : ");
    scanf("%d",&s[i].balance);
    printf("\n\n");
  }
}

void output(int a)
{
    printf("name : %s \n",s[a].name);
    printf("roll no. : %d \n",s[a].account);
    printf("age : %d \n",s[a].balance);
}

void balance(int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(s[i].balance < 200)
            {
                output(i);
            }
        }
}

void inc(int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(s[i].balance > 1000)
            {
                s[i].balance += 100;
                output(i);
            }
        }
}

int main()
{
    int n;
    char op;
    printf("Enter the number of customer data you want to fill : ");
    scanf("%d",&n);
    input(n);
    printf("\ncustomers whose balance is less than 200 : \n");
    balance(n);
    printf("\ncustomers whose balance is more than 1000 : \n");
    inc(n);

}
