#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,d,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            d=arr[i]%10;
            s=s+d;
            arr[i]=arr[i]/10;
        }
    }
    printf("%d",s);
}