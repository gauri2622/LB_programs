#include<stdio.h>


int calculatecube(int ivalue)
{
    long int icube;
     icube=ivalue*ivalue*ivalue;
    return icube;
}
int main()
{
  int ino=0;
   long iAns=0;

  printf(" enter number:\n");
  scanf("%d",&ino);
  iAns= calculatecube(ino);
printf("cube is: %d",iAns);
    return 0;
}