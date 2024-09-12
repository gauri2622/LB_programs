//Accept on character from user and check whether that character is  vowel(a,e,i,o,u) or not.
#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char cno)
{
    if((cno=='a')||(cno=='e')||(cno=='i')||(cno=='o')||(cno=='u'));
    {
         return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
   char cvalue='\0';
   bool bret=FALSE;

   printf("enter character\n");
   scanf("%c",&cvalue);

   bret=ChkVowel(cvalue);

   if(bret==TRUE)
   {
    printf("it is vowel\n");
   }
   else
   {
    printf("it is not vowel\n");
   }
    return 0;
}