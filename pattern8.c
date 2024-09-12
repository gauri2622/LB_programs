//input: 4
//output:   A B C D
#include<stdio.h>
void Display(int ino)
{
  int icnt=0;
  char ch='\0';
  for(icnt=1,ch='A';icnt<=ino;icnt++,ch++)
  {
    printf("%c\t",ch);
    
  }
  printf("\n");
}
int main()
{
    int ivalue=0;
    printf("enter the number you want:");
    scanf("%d",&ivalue);
    Display(ivalue);

    return 0;
}