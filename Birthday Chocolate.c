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
    int s[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int d,m;
    scanf("%d%d",&d,&m);
    int j,S,c=0,k;
    for(i=0;i<=n-m;i++)
    {
     S=0;   j=i;
        for(k=1;k<=m;k++)
        {
            S=S+s[j];
            j++;
        }
         if(S==d)
         {
          c++;
         }
    }
    
    printf("%d",c);
}
