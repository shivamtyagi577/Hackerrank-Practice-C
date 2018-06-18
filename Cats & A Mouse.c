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
    int q;
    scanf("%d",&q);
    int x,y,z;
    for(int i=1;i<=q;i++)
    {
        scanf("%d%d%d\n",&x,&y,&z);
        int a,b;
        a=z-x;
        b=z-y;
        if(a<0)
        {
            a=-1*a;
        }
        if(b<0)
        {
            b=-1*b;
        }
        if(a == b)
        {
            printf("Mouse C\n");
        }
        if(a > b)
        {
            printf("Cat B\n");
        } 
        if(a < b)
        {
            printf("Cat A\n");
        }
    }
}
