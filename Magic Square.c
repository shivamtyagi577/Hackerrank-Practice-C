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
    int inp[3][3],arr1[3][3]={2,9,4,7,5,3,6,1,8},arr2[3][3]={6,1,8,7,5,3,2,9,4},arr3[3][3]={2,7,6,9,5,1,4,3,8},arr4[3][3]={4,3,8,9,5,1,2,7,6},arr5[3][3]={8,1,6,3,5,7,4,9,2},arr6[3][3]={4,9,2,3,5,7,8,1,6}
    ,arr7[3][3]={8,3,4,1,5,9,6,7,2},arr8[3][3]={6,7,2,1,5,9,8,3,4},i,j,cost,min=10000;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&inp[i][j]);
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr1[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr2[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr3[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr4[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr5[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr6[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr7[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(arr8[i][j]-inp[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    printf("%d\n",min);
    return 0;
}
