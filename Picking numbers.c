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
    int n;
    scanf("%d",&n);
    int a[n],i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    for(i=1;i<n;i++)
    {
        int max=0;k=0;
        for(int j=0;j<n;j++)
        {
           if((a[j]-a[i])==1)
            {
             k++;
            }
           if((a[j]-a[i])==0)
            {
              k++;
            }
           if((a[j]-a[i])==-1)
            {
             k++;
            }
            if(k>=max)
            {
                max=k;
            }
        }
         printf("%d",k);
    }
}
