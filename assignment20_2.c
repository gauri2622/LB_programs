//Accept number of rowws and number of columns from user and display below pattern.
/*
input: irow=4,icol=4
output: 2 4 6 8 10
        1 3 5 7 9 
        2 4 6 8 10
        1 3 5 7 9 
*/
#include <stdio.h>

void Pattern(int iRow, int iCol) {
    int inum = 1;

    for (int icnt = 1; icnt <= iRow; icnt++) {
        for (int icnt1 = 1; icnt1 <= iCol; icnt1++) {
            if (icnt % 2 == 0) {
                printf("%d\t", inum);
                inum += 2;
            } else {
                printf("%d\t", inum);
                inum += 2;
            }
        }

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