//Accept number of rows and number of columns from user and display below pattern

/*
input: irow=4   icol=4
output: 1 2 3 4
        1 * * 4
        1 * * 4
        1 2 3 4
*/

#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    int icnt=1;
    int icnt1=1;
    for ( icnt = 1 ; icnt <= iRow; icnt++) {
        for ( icnt1 = 1; icnt1 <= iCol; icnt1++) 
        {
            if(icnt==1||icnt1==1||icnt==iRow||icnt1==iCol)
            {
                printf("%d\t",icnt1);
            } 
           else
           {
             printf("*\t");
           }
        }
     printf("\n");
    }

}
int main() {
    int ivalue = 0;
    int ivalue1 = 0;

    printf("Enter the rows: ");
    scanf("%d", &ivalue);
    printf("Enter the columns: ");
    scanf("%d", &ivalue1);

    Pattern(ivalue, ivalue1);
    return 0;
}