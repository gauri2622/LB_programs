//write a program which accepts file name from user and count number of white spaces from that file.

#include <stdio.h>
#include <stdlib.h>

#define Buffersize 1024 

int countWhite(char Fname[])
{
    int i = 0;
    int icount = 0;

    FILE *fd;
    char Arr[Buffersize];

    fd = fopen(Fname, "r");
    
    if (fd == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fgets(Arr,Buffersize,fd)!=NULL)
    {
        for(i=0;Arr[i]!='\0';i++)
        {
            if (Arr[i]==' ')
            {
                icount++;
            }
        }
        
    }

    fclose(fd);
    return icount;
}

int main()
{
    char FileName[30];
    int iret = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iret = countWhite(FileName);

    printf("Number of white spaces: %d\n", iret);

    return 0;
}
