//accepts two value user and perform the addition.


//step 1: understand the problem statement
//conclusion: we have to accepts 2 integers and perform its addition.

//step 2:write the algorithm
/*
START
  Accepts 1st no from user and store it into no1
   Accepts 2nd no from user and store it into no2
   create one variable to store the result named as ans
   perform addtion of no1 and no2 ,store the result in ans
   display the result from ans to the user
  STOP
*/

//step3: decide programming language(C,C++,Java,Python)
//we select c programming

// Step 4:  write the program

#include<stdio.h>

int main()
{
   int  no1=0;
   int no2=0;
   int  add=0;
printf("enter first number:\n");
scanf("%d",&no1);
printf("enter second number:\n");
scanf("%d",&no2);

   add=no1+no2;

   printf("addition is:%d",add); 

}

// Step5: test the code
/*
test case 1:
input :10 11
output:21

Test case 2:
input:10 0
output: 10

Test case 3:
input: -6 -5
output: -11

Test case 4:
input 12 -6
output: 6
*/