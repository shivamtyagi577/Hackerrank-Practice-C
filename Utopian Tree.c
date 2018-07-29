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
    
        int t,h=0,i,j;
        scanf("%d",&t);
        int n[t];
        for(j=0;j<t;j++)
        {
            scanf("%d",&n[j]);
            for(i=0;i<=n[j];i++)
            {
            
                if(i%2!=0)
             {
                    h*=2;
             }
             else 
             {
                 h+=1;
             }
            }
            printf("%d\n",h);
            h=0;
        }
    
    
}
