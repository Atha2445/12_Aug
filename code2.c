// Sum of Array elements//
#include<stdio.h>
int main()
{
    int a[5],i,n,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("sum=%d",sum);
    return 0;
}
