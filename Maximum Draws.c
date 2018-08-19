#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Its a pigeon hole principle;



int main()
{
    int t;
    scanf("%d",&t);
    int i,n;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",n+1);
    }
}
