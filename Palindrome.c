#include<stdio.h>
int main()
{
    int i,n,d,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
      d=n%10;
      rev=rev*10+d;
      n=n/10;
    }
    if(temp==rev)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}