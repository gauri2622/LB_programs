#include<stdio.h>

int strlen(char *str)
{
   int icnt=0;
   

  while(*str!='\0')
  {
    
    icnt++;
    str++;
  }
  return icnt;
}

int strlrnR(char *str)
{
    static int icnt=0;
   

  if(*str!='\0')
  {
    
    icnt++;
    str++;

    strlenR(Arr);
  }
 return icnt; 
}

int main()
{
    int iret=0;
    int Arr[5]={10,20,30,40,50};

    iret=strlenR(Arr);
    printf("length of string is:%d\n",iret);
    return 0;
}