#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=n;
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    if(c==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}