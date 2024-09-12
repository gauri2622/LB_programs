#include<stdio.h>
double rectarea(float fwidth,float fheight)
{
  float area=0.0;
  area=fwidth*fheight;
  
  
}
int main()
{
    float fvalue=0.0,fvalue1=0.0;
    double dret=0.0;
    printf("enter width");
    scanf("%f",&fvalue);

    printf("enter height");
    scanf("%f",&fvalue1);

    dret=rectarea(fvalue,fvalue1);

    printf("reactangle area is",rectarea);
    return 0;

}