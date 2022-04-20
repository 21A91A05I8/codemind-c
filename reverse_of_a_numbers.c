#include<stdio.h>
int main()
{
    int n,temp,d,count=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        count=count*10+d;
        
    }
    printf("%d",count);
}