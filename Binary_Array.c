#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc++;
        if(arr[i]==0 || arr[i]==1)
        {
            c++;
        }
    }
    if(dc==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}