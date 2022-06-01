#include<stdio.h>
int main()
{
    int t,c=0,d,i,a,b;
    scanf("%d",&t);
    while(t)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
                d=i%10;
                if(d==2 || d==3 || d==9)
                {
                    c++;
                }
        }
        printf("%d
",c);
        t--;
    }
}