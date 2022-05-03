#include<stdio.h>
int main()
{
    int n,arr[100],t,k=0,d,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            sum=sum+1;
        }
        else
        {
            k=k+2*1;
        }
    }
    d=sum+k;
    printf("%d",d);
    
}