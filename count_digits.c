#include<stdio.h>
int main()
{
    int n,arr[1000],i,d,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        while(arr[i])
        {
            d=arr[i]%10;
            dc++;
            arr[i]=arr[i]/10;
        }
        if(dc==0)
        {
            printf("%d ",dc+1);
        }
        else
        {
            printf("%d ",dc);
        }
        
    }
}