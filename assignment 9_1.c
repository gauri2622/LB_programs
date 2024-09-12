#include<stdio.h>
double circlearea(float fradius)
{
   float area=0.0;
   float PI=3.14f;
   float radius;
   area=PI*radius*radius;
   return fradius;
}
int main()
{
    float fvalue=0.0;
    double dret=0.0;

    printf("enter radius");
    scanf("%f",&fvalue);

    dret=circlearea(fvalue);
    printf("radius is",dret);
    return 0;
}