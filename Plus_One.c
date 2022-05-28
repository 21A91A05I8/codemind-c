#include<stdio.h>
int main()
{
    int n,a[100],i,d[100],j=0,k,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        r=r*10+a[i];
    }
    k=r+1;
    j=0;
    while(k)
    {
       d[j]=k%10;
       k=k/10;
       j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d ",d[i]);
    }

}