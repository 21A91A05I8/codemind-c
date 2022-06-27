#include<stdio.h>
int main()
{
    int a,b,i,j,arr[100][100],s=0,c=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(arr[i][j]%2==0)
            s=s+arr[i][j];
            else
            c=c+arr[i][j];
        }
    }
    printf("%d %d",s,c);
    
    
    
}