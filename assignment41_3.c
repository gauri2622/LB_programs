//Write application which accept file name from user and and read all data from that file and display contents on screen.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  FILE *fd;
  char FileName[30];
  char ch;
  printf("enter the name of the file:");
  scanf("%s",FileName);
  fd=fopen(FileName,"r");

  if(fd==NULL)
  {
    printf("unable opening the file");
  }   
  else
  {
    printf("content of the file:\n");
    while((ch=fgetc(fd))!=EOF)
    {
        putchar(ch);
    }
    fclose(fd);
  }
  return 0;
}

