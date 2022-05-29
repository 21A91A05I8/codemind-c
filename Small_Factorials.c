#include<stdio.h>
int main()
{
    int t,n,fact=1,i;
    scanf("%d",&t);
    i=1;
   while(t)
    {
        scanf("%d",&n);
        fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
             
        }
        printf("%d
",fact);
        t--;
    }
    return 0;
    
}