#include<stdio.h>
int main()
{
    int n,num,sum=0,digit;
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        
    }
    if(num%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}