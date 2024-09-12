// problem statement : accepts radius from usser and calculate the area of circle

//step 1: understand the problem statements
// conclusion: we are going to use the formula as PI*R*R

//step 2: algorithm
/*start
    1. accepts radius from user into RADIUS
    2.create variable as PI and store value 3.14
    3. calculate area PI*RADIUS*RADIUS
    4. display value of area to user
stop
*/
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//function name: calculatearea
// description: it is used to calculate area of circle
//input: float
//output: float
//author name:  gauri sarjerao mahale
//date:  2/10/23
#define PI 3.14
float calculatearea (float fradius)
{
    float fAns; 

    fAns= PI *fradius*fradius;
    return fAns;
}
int main()
{
    auto float fradius=0.0f;
    auto float farea = 0.0f;
    printf("enter the radius of circle:\n");
    scanf("%f",&fradius);

    farea= calculatearea(fradius);
    printf("area of circle is:%f",farea);
 


    return 0;
}