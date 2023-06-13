#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,j,c=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
    }
    if (c==0)
    {
        printf("array is unique\n");
    }
    else{
        printf("array is not unique");
    }

}
