//input: 4
//output:    a b c d 
#include<stdio.h>
void Display(int ino)
{
  int icnt=0;
  char ch='\0'; /// char ch='a';
  for(icnt=1,ch='a';icnt<=ino;icnt++,ch++)
  {
    printf("%c\t",ch);
    //ch++;
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