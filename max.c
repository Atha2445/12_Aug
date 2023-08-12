#include<stdio.h>
int main()
{
    int i,n;
    float a[5],max=0.0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
       if(max<a[i])
       {
           max=a[i];
       }
    }
    printf("\n%.1f",max);
    return 0;
}
