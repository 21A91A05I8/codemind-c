#include<stdio.h>
int ls(int *arr,int n,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(arr[i]==se)
    {
        return 1;
    }
    }
    return 0;
}
int main()
{
    int n,se,arr[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    se=sum/n;
    if(ls(arr,n,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}