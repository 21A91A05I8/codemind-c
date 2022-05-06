#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,dc=0,j;
    float d,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
            if(c==2)
            {
                dc++;
                sum=sum+arr[i];
            }
    }
d=sum/dc;
printf("%.2f",d);
}