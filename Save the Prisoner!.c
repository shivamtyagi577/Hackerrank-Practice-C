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
    int t;
    long n,m,s;
    long i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%li%li%li",&n,&m,&s);
        int temp=(m+s-1-1)%n+1;
        printf("%d\n",temp);
    }
}
