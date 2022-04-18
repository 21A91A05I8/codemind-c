#include<stdio.h>
int main()
{
    int d,n,sum=0,mul=1,k;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        mul=mul*d;
        n=n/10;
    }
    k=mul-sum;
    printf("%d",k);
    
    
}