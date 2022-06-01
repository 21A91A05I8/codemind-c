#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,d,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        while(arr[i])
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        printf("%d ",rev);
    }
}