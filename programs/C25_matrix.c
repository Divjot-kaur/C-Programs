/*Write a menu driven program for matrices operation on one or two matrices
1. Addition of two matrices
2. Subtraction of two matrices
3. Finding upper and lower triangular matrices
4. Transpose of matrix
5. Product of two matrices*/
#include <stdio.h>
#include <stdlib.h>

int input(int a[10][10],int row, int col)      //array input function
{
    int i,j;

    printf("\nenter elements of array row-wise : \n");
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
    {
        scanf("%d",&a[i][j]);
    }
}

int output(int a[10][10],int row,int col)     //array output function
{
    int i,j;
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int sum( )        //sum of array
{
    int row,col,row1,col1,i,j;

    printf("enter number of rows for 1st array = ");
    scanf("%d",&row);
    printf("enter number of columns for 1st array = ");
    scanf("%d",&col);
     printf("enter number of rows for 2nd array = ");
    scanf("%d",&row1);
    printf("enter number of columns for 2nd array = ");
    scanf("%d",&col1);

    if(row == row1 && col == col1)     //condition to see if addition is possible or not
    {                                  //order should be same of both matrix
        int a[10][10],b[10][10];
        input (a,row,col);
        input (b,row1,col1);
        int add[10][10];
        for(i=0;i<row;++i)
            for(j=0;j<col;++j)
            {
                add[i][j] = a[i][j] + b[i][j];
            }

        printf("\nsum array : \n");
        output(add,row,col);
    }
    else
        printf("\nrows & column are not equal so addition is not possible!! \n");
}

int diff( )        //difference of array
{
    int row,col,row1,col1,i,j;

    printf("enter number of rows for 1st array = ");
    scanf("%d",&row);
    printf("enter number of columns for 1st array = ");
    scanf("%d",&col);
     printf("enter number of rows for 2nd array = ");
    scanf("%d",&row1);
    printf("enter number of columns for 2nd array = ");
    scanf("%d",&col1);

    if(row == row1 && col == col1)          //condition to see if addition is possible or not
    {                                       //order should be same of both matrix
        int a[10][10],b[10][10],minus[10][10];
        input (a,row,col);
        input (b,row1,col1);
        for(i=0;i<row;++i)
            for(j=0;j<col;++j)
            {
                minus[i][j] = a[i][j] - b[i][j];
            }
        printf("\ndifference array : \n");
        output(minus,row,col);
    }
    else
        printf("\nrows & column are not equal so difference is not possible!! \n");
}

int mul( )       // multiplication of array
{
    int row,col,r,c,i,j;

    printf("enter number of rows for 1st array = ");
    scanf("%d",&row);
    printf("enter number of columns for 1st array = ");
    scanf("%d",&col);
     printf("enter number of rows for 2nd array = ");
    scanf("%d",&r);
    printf("enter number of columns for 2nd array = ");
    scanf("%d",&c);

    if(col == r)            //column of first and row of second matrix must be equal for multiplication to be possible
    {
        int a[10][10],b[10][10];
        input (a,row,col);
        input (b,r,c);
        int i,j,muls[10][10],k;
        for(i=0;i<row;++i)
            for(j=0;j<c;++j)
            {
                muls[i][j] = 0;
                for(k=0;k<col;++k)
                {
                    muls[i][j] += a[i][k] * b[k][j];
                }
            }

        printf("\nmultiplication array : \n");
        output(muls,row,c);
    }
    else
         printf("\ncolumn of a is not equal to row of b ,so multiplication is not possible!! \n");
}

int triangle( )   //upper and lower triangle display
{
    int row,col,i,j;

    printf("enter number of rows for array = ");
    scanf("%d",&row);
    printf("enter number of columns for array = ");
    scanf("%d",&col);
    int a[10][10],b[10][10];
    input (a,row,col);
    for(i=0;i<row;++i)          //equating a and b matrix
        for(j=0;j<col;++j)
        {
                b[i][j] = a[i][j];
        }
    printf("\narray : \n");
    output(a,row,col);
    for(i=0;i<row;++i)           //upper triangle matrix
        for(j=0;j<col;++j)
        {
            if(i>j)
                a[i][j] = 0;
        }
    printf("\nupper triangle of array : \n");
    output(a,row,col);

    for(i=0;i<row;++i)              //lower triangle matrix
        for(j=0;j<col;++j)
        {
            if(i<j)
                b[i][j] = 0;
        }
    printf("\nlower triangle of array : \n");
    output(b,row,col);
}

int transpose( )       //transpose of array
{
    int row,col,i,j;

    printf("enter number of rows for array = ");
    scanf("%d",&row);
    printf("enter number of columns for array = ");
    scanf("%d",&col);
    int a[10][10],b[10][10];
    input (a,row,col);
    for(i=0;i<col;++i)
        for(j=0;j<row;++j)
        {
            b[i][j] = a[j][i];
        }
    printf("\narray : \n");
    output(a,row,col);
    printf("\ntranspose of array : \n");
    output(b,col,row);

}


int main()
{
    int op;
    char ans;
    do
    {
        printf("\n--------------MENU--------------");
        printf("\n1. Add the matrices");
        printf("\n2. Subtract the matrices");
        printf("\n3. Display upper and lower matrices");
        printf("\n4. Transpose the matrices");
        printf("\n5. Multiply the matrices");
        printf("\nEnter your Choice: ");
        scanf("%d",&op);
        switch(op)
        {
            case 1 : printf("\nAddition of the matrices: \n");
                        sum();
                     break;
            case 2 : printf("\nSubtraction of the matrices: \n");
                     diff();
                     break;
            case 3 : printf("\nDisplaying Lower and upper triangle matrices: \n");
                     triangle();
                     break;
            case 4 : printf("\nTranspose of the matrices: \n");
                     transpose();
                     break;
            case 5 : printf("\nMultiplication of the matrices: \n");
                     mul();
                     break;
            default: printf("\nIncorrect input \n");
                     break;
        }
        printf("\nDo you want to continue : ");
        scanf("%s",&ans);
    }while(ans == 'y' || ans == 'Y');
}
