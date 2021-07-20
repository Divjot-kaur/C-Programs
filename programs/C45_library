#include <stdio.h>
#include <stdlib.h>
struct library
{
    int num;
    char author[50];
    char title[50];
    int issued;
}b[100];

void add(int i,int n)
{
    for(;i<n;i++)
    {
        printf("\n");
        printf("Enter accession number : ");
        scanf("%d",&b[i].num);
        printf("Enter author of book : ");
        scanf("%s",&b[i].author);
        printf("Enter title of book : ");
        scanf("%s",&b[i].title);
        b[i].issued = 0;
    }
    printf("\n");
}

void display(int n)
{
    printf("\n");
    printf("accession number : %d \n",b[n].num);
    printf("author of book : %s \n",b[n].author);
    printf("title of book : %s \n",b[n].title);
    if(b[n].issued == 1)
        printf("book is issued\n");
    else
        printf("book is NOT issued\n");
}
void authors(int n,char aur[50])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(b[i].author,aur) == 0)
        {
            display(i);
        }
    }
}
void titles(int n,char tit[50])
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(b[i].title,tit) == 0)
        {
            count++;
            display(i);
        }
    }
    printf("\ntotal books of the title %s = %d",tit,count);
}

int total()     //total nahi aa raha
{
    int x;
    x = sizeof(b)/sizeof(b[0]);
    return x;
}

int issue(int a)
{
    if(b[a].issued == 1)
        return 0;
    else
    {
        b[a].issued = 1;
        return 1;
    }
}
int main()
{
    int n,d,a,i,op,t,u;
    char aur[50],tit[50],ans;
    printf("\nenter the number of books to be added : ");
    scanf("%d",&n);
    add(0,n);
    do
    {
        printf("\n--------------MENU--------------");
        printf("\n1 - Display book information");
        printf("\n2 - Add a new book");
        printf("\n3 - Display all the books in the library of a particular author");
        printf("\n4 - Display the number of books of a particular title");
        printf("\n5 - Display the total number of books in the library");
        printf("\n6 - Issue a book");
        printf("\nEnter your Choice: ");
        scanf("%d",&op);
        t = n;
        switch(op)
        {
            case 1 : for(i=0;i<n;i++)
                        display(i);
                     break;
            case 2 : printf("\nEnter number of more books to be added : ");
                     scanf("%d",&d);
                     n=n+d;
                     add(t,n);
                     break;
            case 3 : printf("\nEnter name of author whose books you want : ");
                     scanf("%s",&aur);
                     authors(n,aur);
                     break;
            case 4 : printf("\nEnter title book you want : ");
                     scanf("%s",&tit);
                     titles(n,tit);
                     break;
            case 5 : printf("\ntotal no. of books = %d ",n);
                     break;
            case 6 : printf("\nenter the accession number of the book you want to issue : ");
                     scanf("%d",&a);
                     for(i=0;i<n;i++)
                     {
                         if(b[i].num == a)
                         {
                             u = issue(i);
                             if (u==0)
                                printf("Book is already issued ");
                             else
                                display(i);
                         }
                     }
                     break;
            default: printf("\nInvalid input \n");
                     break;
        }
        printf("\nDo you want to continue : ");
        scanf("%s",&ans);
    }while(ans == 'y' || ans == 'Y');
}
