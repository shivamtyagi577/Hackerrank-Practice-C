#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n,i,S=0;
    //printf("Enter a value of n:\n");
    scanf("%d",&n);
    int arr[n];
    //printf("Enter elements in a array\n");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
        //printf("%d",arr[i]);
    }
    //printf("\n");
    for(i=0;i<n;i++)
    {
        S=S+arr[i];
    }
    printf("%d",S);
    return 0;
}
