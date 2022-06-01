#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,d,rev=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        temp=arr[i];
        while(arr[i])
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        if(rev==temp)
        c++;
    }
    printf("%d",c);
}