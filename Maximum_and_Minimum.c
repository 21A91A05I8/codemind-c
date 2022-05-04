#include<stdio.h>
int main()
{
    int n,arr[100],i,c=1,j,max=0,min=9999,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && (i!=j))
            {
                c++;
                
            }
            if(c==arr[i])
                {
                    dc++;
                    if(arr[i]>=max)
                    {
                        max=arr[i];
                    }
                    if(arr[i]<=min)
                    {
                        min=arr[i];
                    }
                }
           
        }
        
    }
    if(dc==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}