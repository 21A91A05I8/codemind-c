#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,d,c=0,temp,sum=0,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    i=1;
    while(rev)
    {
        d=rev%10;
        c=pow(d,i);
        sum=sum+c;
        rev=rev/10;
        i++;
        
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}