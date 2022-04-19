#include<stdio.h>
int main()
{
    int i,n,temp,d,mul,sum=0;
    scanf("%d",&n);
    temp=n;
    mul=n*n;
    while(mul)
    {
        d=mul%10;
        sum=sum+d;
        mul=mul/10;
        
    }
    
    if(temp==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
    
}