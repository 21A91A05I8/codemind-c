#include<stdio.h>
int main()
{
    int i,sum=0,n,arr[100],s=0,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
    for(i=1;i<=n/2;i++)
    {
        
            sum=sum+arr[i];
        
    }
     for(i=(n/2)+1;i<=n;i++)
    {
        
            s=s+arr[i];
        
    }
    diff=s-sum;
    printf("%d",diff);
    }
    if(n%2==1)
    {
       for(i=1;i<(n+1)/2;i++)
    {
        
            sum=sum+arr[i];
        
    }
     for(i=(n+1)/2;i<=n;i++)
    {
        
            s=s+arr[i];
        
    }
    diff=s-sum;
    printf("%d",diff); 
    }
    
    
}