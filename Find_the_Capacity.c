#include<stdio.h>
int main()
{
    int s,b,t,c;
    scanf("%d%d%d",&s,&b,&t);
    c=(2*s*t*b*512)/1024;
    printf("%dKB",c);
}