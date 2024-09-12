#include<stdio.h>

float CalculatePercentage(int imarks , int iTotal)
{
    auto float  total; 
    if( imarks>iTotal)
     {                               //filter.....
        printf("invalid input\n");  
        return total;
     }
     if ((imarks<0) || (iTotal< 0))
     {
        printf("invalid input\n");
        return total;
     }
     

      total = (((float )imarks/ (float) iTotal)*100);
     
     return total;
}

int main()
{
  auto int ivalue=0;
    auto int ivalue2=0;
    auto float fRet = 0.0f;
  printf("enter the marks :\n");
  scanf("%d",&ivalue);

  printf("Total marks:\n");
  scanf("%d",&ivalue2);

   fRet= CalculatePercentage(ivalue,ivalue2);

   printf("percentage is: %f\n",fRet);


   return 0;
}