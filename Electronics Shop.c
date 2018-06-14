#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long b;
    int  n,m;
    scanf("%li%d%d",&b,&n,&m);
    int k[n],u[m];
    long i,j;
    int result=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
      for(i=0;i<m;i++)
    {
        scanf("%d",&u[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   
           if(k[i]+u[j]<=b)
           {
               if(result<=k[i]+u[j])
               {
                  result=k[i]+u[j]; 
               }
           }
            
        }
    }
   printf("%d",result); 
}
