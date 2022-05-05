#include<stdio.h>
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n==i*i)
       {
           c++;
       }
        
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}