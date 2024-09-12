//Write application which accept file name from user and open that file in read mode.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd=0;
  char FileName[30];
  printf("enter the name of the file:");
  scanf("%s",FileName);
  fd=open(FileName,O_RDWR);

  if(fd==-1)
  {
    printf("unable to open file\n",FileName);
  }   
  else
  {
    printf("file open sucessfully:%d\n",FileName,fd);
    close(fd);
  }
  return 0;
}

