#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,a,b,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        
        if(arr[i]<a || arr[i]>b)
        {
            c++;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
   
}