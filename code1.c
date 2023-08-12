#include<stdio.h>
int main()
{
    int a[10],i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t%u\n",a[i],&a[i]);
 }
    printf("\n%u",a);
    return 0;
}
