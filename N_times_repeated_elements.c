#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1,k,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&& i!=j && arr[j]!=-1)
            {
                c++;
                arr[j]=-1;
                
                
            }
           
        }
        if(c==k)
        
       {
           
          dc++;
          printf("%d ",arr[i]);
        }
    }
    if(dc==0)
    {
        printf("-1");
    }
    
}