#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double a[100];
    printf("enter number of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("enter number %d  :",i+1);
        scanf("%lf",&a[i]);
    }
    for(int i=1;i<n;++i)
    {
        if (a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("largest element is %.2lf",a[0]);
    return 0;
}
