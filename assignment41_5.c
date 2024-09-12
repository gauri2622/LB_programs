//Write application which accept file name from user and one string from user.write that string at the end of file.

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
    
    printf("enter the string to append:");
    scanf("%s",ch);

    fprintf(fd,"%s",ch);
    fclose(fd);
    printf("string appended successfully to:%s\n",FileName);
  }
  return 0;
}

