#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1,k,dc=0,sum=0;
    float y;
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
            if(arr[i]==arr[j]&& i!=j && arr[i]>=0)
            {
                c++;
                arr[j]=-1;


            }

        }
        if(c==arr[i])

       {

          dc++;
          sum=sum+arr[i];

        }
    }

    if(dc==0)
    {
        printf("-1");
    }
    else
    {
        y=float(sum)/dc;
        printf("%.2f",y);
    }

} 