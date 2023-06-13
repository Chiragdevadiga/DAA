#include <stdio.h>
#include <stdlib.h>
void towers(int,char,char,char);
int main()
{
    int num;
    printf("enter number of disks:");
    scanf("%d",&num);
    printf("the sequence of moves involved in the tower of hanoi:\n");
    towers(num,'A','B','C');
    return 0;
}
void towers(int num,char src,char dest,char aux){
if (num==1)
    {

        printf("\n Move disc 1 from peg %c to peg %c",src,dest);
        return;
    }
    towers(num-1,src,aux,dest);
    printf("\n Move the disc %d from peg %c to %c",num,src,dest);
    towers(num-1,aux,dest,src);
}
