#include<stdio.h>
int main()
{
    int r,i,j,arr[100][100],d=0,sum=0;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
           scanf("%d",&arr[i][j]) ;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
                
            }
        }
    }
    printf("Principal Diagonal:%d
",sum);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==r-1-j)
            {
              d=d+arr[i][j]  ;
            }
            
        }
    }
    printf("Secondary Diagonal:%d
",d);
}