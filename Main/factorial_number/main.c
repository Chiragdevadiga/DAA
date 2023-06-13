#include <stdio.h>
#include <stdlib.h>
int fact(int n);

int main()
{
    int n;
    printf("enter a positive number\n");
    scanf("%d",&n);
    printf("\n factorial of %d =%d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
