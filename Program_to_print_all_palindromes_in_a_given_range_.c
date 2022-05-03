#include<stdio.h>
int main()
{
    int a,b,d,rev=0,i,temp;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        rev=0;
        while(temp)
        {
        d=temp%10;
        temp=temp/10;
        rev=rev*10+d;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
   
    
}