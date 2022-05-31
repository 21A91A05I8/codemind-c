#include<stdio.h>
int main()
{
    int n,i=0,j,s[100],c=0,dc=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        c++;
        s[i]=d;
        n=n/10;
        i++;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i]==s[j]&& i!=j)
            {
                dc++;
            }
        }
    }
    if(dc==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}