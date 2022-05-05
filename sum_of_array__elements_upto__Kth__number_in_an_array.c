#include<stdio.h>
int main()
{
    int n,arr[100],a,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+arr[i];
        
    }
   printf("%d",sum);
    
}