//Check if the matrix is symmetric or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50][50];
    int row,col,i,j,flag = 0;

    printf("enter number of rows = ");
    scanf("%d",&row);
    printf("enter number of columns = ");
    scanf("%d",&col);
    printf("enter elements of array row-wise : \n");

    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
    {
        if (i != j)
            if (a[i][j] == a[j][i])
            {
                flag = 1;
            }
            else
                flag = 0;

    }
    if(flag == 1)
        printf("matrix is symmetric ");
    else
        printf("matrix is NOT symmetric ");
}
