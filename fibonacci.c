#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,i,number;
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}