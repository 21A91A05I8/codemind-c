#include<stdio.h>
int main()
{
    int n,d,arr[100],i,k,max=arr[0];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);
    for(i=1;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if((arr[i]+d)>=max)
        {
            printf(("True "));
        }
        else
        {
            printf("False ");
        }
    }
}