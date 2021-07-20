//address of each character of a word
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
    char a[50],i;
    printf("enter a word : ");
    scanf("%s",&a);

    for(i=strlen(a)-1;i>=0;i--)
        printf("\naddress of name[%d] = %u \n",i,&a[i]);
}
