#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
 long n,k;
    scanf("%li%li",&n,&k);
    long bill[n],sum=0,diff=0,b,half=0;
    long i;
    for(i=0;i<n;i++)
    {
        scanf("%li",&bill[i]);
        sum+=bill[i];
    }
    scanf("%li",&b);
    sum-=bill[k];
    half=sum/2;
    if(half<b)
    {
        diff=b-half;
        printf("%li",diff);
    }
    else
    {
        printf("Bon Appetit");
    }
}
