#include<stdio.h>
int main()
{
    int a,b,arr[100],i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
        sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}