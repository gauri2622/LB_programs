//Accept number of rows and number of cloumns to user annd display the below pattern.
/*
input: irow=4  icol=4
output:  a b c d 
         1 2 3 4
         a b c d
         1 2 3 4 
*/
#include <stdio.h>

void Pattern(int iRow, int iCol) {
    int inum = 1;
    char ch='\0';

    for (int icnt = 1 ,ch='a'; icnt <= iRow; icnt++,ch++) {
        for (int icnt1 = 1; icnt1 <= iCol; icnt1++) {
            if (icnt %2==1) {
                printf("%c\t",ch);
                ch++;
            } else {
                printf("%d\t", inum);
                inum ++;
            }
        }

       inum=1;
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