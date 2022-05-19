#include<stdio.h>
int main()
{
    int n,arr[20],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
      for(j=1;j<arr[i];j++)
      {
        if(arr[i]==j*j)
        {
            c++;
        }
      }
        if(c!=0)
        {
            printf("True
");
            
        }
        else
        {
            printf("False
");
        }
      
    }
}