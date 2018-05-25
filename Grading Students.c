#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],rem=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<38)
        {
            printf("%d\n",a[i]);
            continue;
        }
        rem=a[i]%5;
        if((5-rem)<3)
        {
            a[i]+=(5-rem);
            printf("%d\n",a[i]);
        }
        else
        {
            printf("%d\n",a[i]);
        }
    }
}
