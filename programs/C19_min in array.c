//to find minimum value in a array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i,size;

    printf("\nEnter the size of array = ");
    scanf("%d",&size);

    for(i=0;i<size;++i)
    {
        printf("\nEnter the element of array = ");
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int index=1;

    for (i=0;i<size;++i)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            index = i+1;
        }
    }

    printf("\n%d is the minimum value in array \n\nIts position in array is %d \n",min,index);
    return 0;
}
