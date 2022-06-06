#include<stdio.h>
int main()
{
    int r,c,arr[100][100],i,j,sum=0,s=0;
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            s=s+arr[i][j];
            if(i==1 || i==r || j==1 || j==c)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",s-sum);
    //printf("%d",s-sum);
}