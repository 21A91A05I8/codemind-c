#include<stdio.h>
int main()
{
    int n,arr[100],a,b,sum=0,i,s=0,di;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        
        sum=sum+arr[i];
        if(arr[i]>=a && arr[i]<=b)
        {
            s=s+arr[i];
        }
        
    }
    di=sum-s;
    printf("%d",s);
}