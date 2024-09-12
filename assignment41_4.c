//Write application which accept file name from user and display size of file.
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
    printf("file succesfully open\n");
    
    printf("size of the file is:%d\n",FileName);
    fclose(fd);
  }
  return 0;
}

