#include<stdio.h>
int main()
{
    int n,arr[100],i,min=100,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
           min=arr[i] ;
        }
    }
    printf("%d",min);
    
    
}