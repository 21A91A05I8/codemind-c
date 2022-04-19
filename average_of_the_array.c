#include<stdio.h>
int main()
    {
        int i,n,arr[100];
        float sum,se;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        se=sum/n;
        printf("%.2f",se);
        
    }