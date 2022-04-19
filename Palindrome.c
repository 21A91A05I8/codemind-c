#include<stdio.h>
int main()
{
    int i,n,temp,rev=0,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}