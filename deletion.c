#include<stdio.h>
#include<conio.h>
int main()
{

    int a[20],pos,i,n;
    printf("Enter a No.\n");
    scanf("%d",&n);
    printf("%d elements\n",n);
    for(i=0;i<n;i++);
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++);
    {
        a[i]=a[i+1];
    }
    for (i=0;i<n-1;i++);
    {
        printf("%d",a[i]);

    }
    return 0;

}
