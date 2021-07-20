//Enter the marks of students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student. 
#include <stdio.h>
#include <stdlib.h>
struct marks
{
    int roll;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
}s[10];

void input(int n)     //intput
{
  for(int i=0;i<n;++i)
  {
    printf("Enter roll no. : ");
    scanf("%d",&s[i].roll);
    printf("Enter name : ");
    scanf("%s",&s[i].name);
    printf("Enter chemistry marks : ");
    scanf("%d",&s[i].chem_marks);
    printf("Enter maths marks : ");
    scanf("%d",&s[i].maths_marks);
    printf("Enter physics marks : ");
    scanf("%d",&s[i].phy_marks);
    printf("\n");
  }
}


int main()
{
    int n;
    printf("Enter the number of students whose data is to be collected : ");
    scanf("%d",&n);
    input(n);
    float per;
    for(int i=0;i<n;++i)
    {
        per = (float)(s[i].chem_marks + s[i].phy_marks + s[i].maths_marks)/3;
        printf("roll no. : %d \n",s[i].roll);
        printf("name : %s \n",s[i].name);
        printf("percentage : %f  \n",per);
        printf("\n");
    }
    return 0;
}
