#include<stdio.h>

void DisplayR(int ino)
{
    if(ino>=1)
    {
        printf("%d\n",ino);
        ino--;
        DisplayR(ino);
    }
}

int main()
{
   DisplayR(5);
    return 0;
}