//write a program which accepts file name and one character from user and count number of occurrences of that character from that file.

#include <stdio.h>
#include <stdlib.h>
#define Buffersize 1024 

int countChar(char Fname[],char ch)
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

    while (fgets(Arr,Buffersize,fd)!=NULL)
    {
        for(i=0;Arr[i]!='\0';i++)
        {
            if (Arr[i]==ch)
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
    char cValue;

    printf("Enter file name: ");
    scanf("%d", FileName);

    printf("enter the character:");
    scanf("%c",&cValue);

    iret = countChar(FileName,cValue);

    printf("frequency is: %d\n", iret);

    return 0;
}
