#include<stdio.h>
int main()
{
    int i,n,c=0,arr[100],avg=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            c++;
        }
        
    }
    printf("%d",c);
}