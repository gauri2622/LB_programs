//Accept number of rows and number of columns from user and display below pattern.
/*
input: irow=4  icol=4

output: A B C D
        a b c d
        A B C D
        a b c d
*/
#include<stdio.h>

void Pattern(int iRow, int iCol) {
    int icnt = 0;
    int icnt1 = 0;
    char ch = 'A';

    for (icnt = 1; icnt <= iRow; icnt++) {
        for (icnt1 = 1, ch = 'A'; icnt1 <= iCol; icnt1++) {
            printf("%c\t", ch);
            ch = (ch == 'A') ? 'a' : 'A';  // Alternate between uppercase and lowercase
           ch++;
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