#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",(n*(n-1))/2);
    }
}
