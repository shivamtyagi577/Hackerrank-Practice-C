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
    int i,a[3],b[3];
    int k1=0,k2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            k1++;
        }
        else if(a[i]==b[i])
        {
            //printf("\t\0");
        }
        else if(a[i]<b[i])
        {
            k2++;
        }
    }printf("%d\t%d",k1,k2);
}
