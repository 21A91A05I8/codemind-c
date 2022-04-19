#include<stdio.h>
int main()
{
    int n,arr[1000],i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
           max=arr[i] ;
        }
    }
    printf("%d",max);
    
    
}