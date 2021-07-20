//Write a C program for an array of record contains information of managers and workers of a company.
//Print all the data of managers and workers in separate file.
#include <stdio.h>
#include <stdlib.h>
void m_input(int m)     //manager data input
{
    FILE *fptr;
    int i, empno;
    float bpay, allow, ded;
    char name[10];
    fptr = fopen("manager.txt", "w");
    for(i = 0; i < m; i++)
    {
        printf("\nEnter the manager number : ");
        scanf("%d", &empno);
        printf("\nEnter the name : ");
        scanf("%s", name);
        printf("\nEnter the basic pay, allowances & deductions : ");
        scanf("%f %f %f", &bpay, &allow, &ded);
        fprintf(fptr, "%d %s %f %f %f \n", empno,name,bpay,allow,ded);
    }
	fclose(fptr);
}
void w_input(int w)     //workers data input
{
    FILE *fptr;
    int i, empno;
    float bpay, allow, ded;
    char name[10];
    fptr = fopen("workers.txt", "w");
    for(i = 0; i < w; i++)
    {
        printf("\nEnter the worker number : ");
        scanf("%d", &empno);
        printf("\nEnter the name : ");
        scanf("%s", name);
        printf("\nEnter the basic pay, allowances & deductions : ");
        scanf("%f %f %f", &bpay, &allow, &ded);
        fprintf(fptr, "%d %s %f %f %f \n", empno,name,bpay,allow,ded);
    }
	fclose(fptr);
}
void m_print(int m)     //print manager input
{
    FILE *fptr;
    int i, empno;
    float bpay, allow, ded;
    char name[10];
    fptr = fopen("manager.txt", "r");
	printf("\nmanager No.\tName\t Bpay\t\t Allow\t\t Ded\t\t Npay\n\n");
	for(i = 0; i < m; i++)
    {
    	fscanf(fptr,"%d%s%f%f%f\n", &empno,name,&bpay,&allow,&ded);
    	printf("%d \t\t %s \t %.2f \t %.2f \t %.2f \t %.2f \n", empno, name, bpay, allow, ded, bpay + allow - ded);
    }
    fclose(fptr);
}
void w_print(int w)     //print worker input
{
    FILE *fptr;
    int i, empno;
    float bpay, allow, ded;
    char name[10];
    fptr = fopen("workers.txt", "r");
	printf("\nworker No.\tName\t Bpay\t\t Allow\t\t Ded\t\t Npay\n\n");
	for(i = 0; i < w; i++)
    {
    	fscanf(fptr,"%d%s%f%f%f\n", &empno,name,&bpay,&allow,&ded);
    	printf("%d \t\t %s \t %.2f \t %.2f \t %.2f \t %.2f \n", empno, name, bpay, allow, ded, bpay + allow - ded);
    }
    fclose(fptr);
}
int main()
{
    int ch,ans,a,m,w;
    do
    {
        printf("---------------------MENU---------------------");
        printf("\n To enter a record of: ");
        printf("\n 1. Manager");
        printf("\n 2. Worker");
        printf("\n Choose between 1 and 2. Else press any key to exit. \n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :
                    printf("\nEnter the number of managers : ");
                    scanf("%d", &m);
                    m_input(m);
                    break;
            case 2 :
                    printf("\nEnter the number of workers : ");
                    scanf("%d", &w);
                    w_input(w);
                    break;
            default:
                    printf("\n Enter a valid input.");
                    break;
        }
        printf("\nTo enter another record press 1 or to exit press 0.");
        printf("\nEnter your choice : ");
        scanf("%d",&ans);
    }while(ans == 1);
    do
    {
        printf("---------------------MENU---------------------");
        printf("\n To print the record of: ");
        printf("\n 1. Manager");
        printf("\n 2. Worker");
        printf("\n Choose between 1 and 2. Else press any key to exit. \n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                    m_print(m);
                    break;
            case 2 :
                    w_print(w);
                    break;
            default:
                    printf("\n Enter a valid input.");
                    break;
        }
        printf("\nTo continue press 1 else press 0 to exit.");
        printf("\nEnter your choice : ");
        scanf("%d",&a);
    }while(a == 1);
    return 0;
}
