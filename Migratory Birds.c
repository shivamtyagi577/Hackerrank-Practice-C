
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long n; 
    scanf("%li",&n);
    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
    }
    // your code goes here
    int id[]={0,0,0,0,0};
    for(int i = 0; i<n; i++)
        {
            id[types[i]-1]++;
        }
    int max=0,type= 0;
    for(int j=0; j<5; j++)
        {
        if(id[j]>id[max])
            {
            max=j;
                    }
        
    }
    printf("%d",max+1);
    return 0;
}
