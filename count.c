#include<stdio.h>
int main()
{
    int a[7],i,n,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count=count+1;
        }
    }
    printf("Count=%d",count);
    return 0;
}



//HW average of elements double or float//
