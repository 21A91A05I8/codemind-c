#include<stdio.h>
int main()
{
    int n,i,max=0,d;
    scanf("%d",&n);
    while(n)
    {
       d=n%10;
       if(d>=max)
       {
           max=d;
       }
       n=n/10;
    }
    printf("%d",max);
    
    
}