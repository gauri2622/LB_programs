//write a program which accepts total marks and obtained marks from user and calculate percentage.
#include<stdio.h>
float percentage(int no1, int no2)
{
    float total=0.0;
    total=no1/no2*100;
    return total;
    printf("percentage is",total);

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    float fret=0.0;

    printf("enter total marks:");
    scanf("%d",&ivalue1);
    printf("enter obtained marks:");
    scanf("%d",&ivalue2);

    fret=percentage(ivalue1,ivalue2);
    printf("percentage is:%f",fret);


    return 0;
}