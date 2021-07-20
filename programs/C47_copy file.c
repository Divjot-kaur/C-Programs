//Write a C program to copy contents of one file to another file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *c1;
    FILE *c2;
    char f1[100],f2[100];
    char a;

    printf("Enter the filename to open for reading \n");
	scanf("%s", f1);
	printf("Enter the filename to open for reading \n");
	scanf("%s", f2);
    c1 = fopen(f1, "r");

    if(c1 == NULL)
    {
       printf("Cannot open source file");
       exit(1);
    }
    c2 = fopen(f2, "w");
    if(c2 == NULL)
    {
       printf("Cannot open source file");
       fclose(c1);
       exit(2);
    }

    a = fgetc(c1);

    while(a != EOF)
    {
            fputc(a,c2);

            a = fgetc(c1);
    }

    printf("\nFiles copied successfully.\n");
    fclose(c1);
    fclose(c2);
    return 0;
}
