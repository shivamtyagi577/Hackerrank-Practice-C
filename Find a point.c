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
    int i,p[2],q[2],r[2];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&p[0],&p[1],&q[0],&q[1]);
        r[0]=2*q[0]-p[0];
        r[1]=2*q[1]-p[1];
        printf("%d\t%d\n",r[0],r[1]);
    }
}
