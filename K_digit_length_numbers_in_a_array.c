#include<stdio.h>
int main()
{
    int n,arr[1000],i,d,dc=0,k,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
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
            dc=dc+1;
        }
        if(dc==k)
        {
            c++;
        }
       
        
    }
    printf("%d",c);
}