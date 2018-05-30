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
    int i,a[n],max,max_c=0,min,min_c=0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);   
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_c++;
            //printf("%d\n",max);
        }
       else if(a[i]<min)
        {
            min=a[i];
            min_c++;
            //printf("%d\n",min_c);
        }
    }
    printf("%d\t%d",max_c,min_c);
}
