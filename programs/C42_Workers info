/*
Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
Hours of work per day		8			10			>=12
Increase in salary			$50		 	$100		$150
*/

#include <stdio.h>
#include <stdlib.h>
struct salary
{
    char name[10];
    int sal;
    int hour;
}s[10];

void input(int n)
{
  for(int i=0;i<n;++i)
  {
    printf("Enter name : ");
    scanf("%s",&s[i].name);
    printf("Enter salary : ");
    scanf("%d",&s[i].sal);
    printf("Enter hours : ");
    scanf("%d",&s[i].hour);
    printf("\n\n");
  }
}

void output(int a)
{
    printf("\n");
    printf("name : %s \n",s[a].name);
    printf("hours of work : %d \n",s[a].hour);
    printf("salary : %d \n",s[a].sal);
}

void salary(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(s[i].hour >= 8 && s[i].hour < 10)
    {
        s[i].sal += 50;
        output(i);
    }
    else if(s[i].hour >= 10 && s[i].hour < 12)
    {
        s[i].sal += 100;
        output(i);
    }
    else if (s[i].hour >= 12 )
    {
        s[i].sal += 150;
        output(i);
    }
    else
    {
        output(i);
    }
    }
}

int main()
{
    int n;
    printf("Enter the number of employees data you want to fill : ");
    scanf("%d",&n);
    input(n);
    printf("salary : ");
    salary(n);
}
