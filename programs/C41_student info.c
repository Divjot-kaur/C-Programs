/*
Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10).
Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll no.
3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[10];
    int age;
    char address[50];
}s[10];

void input(int n)
{
  for(int i=0;i<n;++i)
  {
    printf("Enter roll no. : ");
    scanf("%d",&s[i].roll);
    printf("Enter name : ");
    scanf("%s",&s[i].name);
    printf("Enter age : ");
    scanf("%d",&s[i].age);
    printf("Enter address : ");
    getchar();
    gets(s[i].address);
    printf("\n\n");
  }
}

void output(int a)
{
    printf("roll no. : %d \n",s[a].roll);
    printf("name : %s \n",s[a].name);
    printf("age : %d \n",s[a].age);
    printf("marks : %s \n",s[a].address);
}

void age_14(int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(s[i].age == 14)
            {
                output(i);
            }
        }
}

void evenroll(int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(s[i].roll%2 == 0)
            {
                output(i);
            }
        }
}
int main()
{
    int n,a,i;
    printf("Enter the number of student data you want to fill : ");
    scanf("%d",&n);
    input(n);
    printf("\nall the student whose age is 14 : \n");
    age_14(n);
    printf("\nall the student whose age is even : \n");
    evenroll(n);
    printf("\nEnter roll no. whose info is to be displayed : ");
    scanf("%d",&a);
    for(i=0;i<n;i++)
        {
            if(s[i].roll == a)
            {
                output(i);
            }
        }
    return 0;
}
