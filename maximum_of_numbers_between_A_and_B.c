#include<stdio.h>
int main()
{
    int n,arr[100],a,b,max=0,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]>max)
            {
                c++;
                max=arr[i];
            }
            
        }
    }
   if(c!=0)
   {
       printf("%d",max);
   }
   else
   {
       printf("-1");
   }
    
    
}