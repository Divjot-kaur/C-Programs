/*
Write a program to compare two dates entered by user.
Make a structure named Date to store the elements day, month and year to store the dates.
If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int date;
    char month[10];
    int year;
};

struct student input()
{
    struct student a;
    printf("Enter date : ");
    scanf("%d",&a.date);
    printf("Enter month: ");
    scanf("%s",&a.month);
    printf("Enter year : ");
    scanf("%d",&a.year);
    printf("\n\n");
    return a;
}

void date(struct student s1,struct student s2)
{
    if(s1.date == s2.date)
        printf("dates are same");
    else
        printf("dates are NOT same");
}
int main()
{
    struct student s1,s2;
    printf("\nenter vales for first : \n");
    s1= input();
    printf("\nenter vales for second : \n");
    s2 = input();
    date(s1,s2);
}
