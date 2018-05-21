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
    int i,j,s1=0,s2=0,r,a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                s1+=a[i][j];
            }
            if((i+j)==(n-1))
            {
                s2+=a[i][j];
            }
        }
    }
    if(s1>s2)
    {
        r=s1-s2;
        printf("%d",r);
    }
    else
    {
        r=s2-s1;
        printf("%d",r);
    }
}
