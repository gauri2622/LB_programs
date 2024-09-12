//Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  FILE *fd;
  char FileName[30];
  printf("enter the name of the file to be created:");
  scanf("%s",FileName);
  fd=fopen(FileName,"w");

  if(fd==NULL)
  {
    printf("unable to create file\n",FileName);
  }   
  else
  {
    printf("file create sucessfully:%d\n",FileName,fd);
    fclose(fd);
  }
  return 0;
}

