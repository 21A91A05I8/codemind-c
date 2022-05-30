#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,dc=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i])
        {
            d=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        if(c%2==0)
        {
            dc++;
        }
    }
    printf("%d",dc);
}