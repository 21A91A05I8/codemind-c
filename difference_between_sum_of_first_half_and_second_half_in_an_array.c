#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,j,s=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n/2;i++)
    {
        s=s+arr[i];
    }
    for(i=(n/2)+1;i<=n;i++)
    {
        c=c+arr[i];
    }
    printf("%d",abs(s-c));
}