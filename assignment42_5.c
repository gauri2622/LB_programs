//write a program which accepts file name and one count from user and read that number of characters from starting position.

#include <stdio.h>
#include <stdlib.h>

#define Buffersize 1024 

int DisplayN(char Fname[],int isize)
{
    int i = 0;
    int icount = 0;

    FILE *fd;
    char Arr[Buffersize];

    fd = fopen(Fname, "r");
    
    if (fd == NULL)
    {
        printf("Error opening file.\n");
       
    }

    while (icount<isize && fgets(Arr,Buffersize,fd)!=NULL)
    {
        for(i=0;Arr[i]!='\0' && icount<isize;i++)
        {
            printf("%c",Arr[i]);
            icount++;
        }
        
    }

    fclose(fd);
    return icount;
}

int main()
{
    char FileName[30];
    int ivalue=0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("enter the number of character:");
    scanf("%d",&ivalue);

    DisplayN(FileName,ivalue);

    return 0;
}
