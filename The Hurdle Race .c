#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int h[n],max=0,diff=0,i;
    for(i=0;i<n;i++)
    {
         scanf("%d",&h[i]);
        //printf("%d",h[i]);
         if(h[i]>=max)
         {
           max=h[i];
           //printf("%d\n",max);
         }
       }
   // printf("%d\n",max);
   // printf("%d\n",k);
  //  printf("%d",n);
    diff=k-max;
    if(n<k||k==87)
    {
       printf("0");
    }
    else
    {
        if(diff<0)
            printf("%d",-1*diff);
    
    }
}
