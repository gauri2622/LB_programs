//Accept number of rows and number of columns from user and display below pattern
/*
input: irow=4   icol=4
output: 1 2 3 4 
        -1 -2 -3 -4
        1 2 3 4 
        -1 -2 -3 -4
*/
#include <stdio.h>

void Pattern(int iRow, int iCol) {
    int inum = 1;
    int flag = 1;

    for (int icnt = 1; icnt <= iRow; icnt++) {
        for (int icnt1 = 1; icnt1 <= iCol; icnt1++) {
            if (flag == 1) {
                printf("%d\t", inum);
                inum++;
            } else {
                printf("%d\t", -inum);
                inum++;
            }
        }
        flag = 1 - flag;
        inum = 1;
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