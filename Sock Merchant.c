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
int n;
    scanf("%d",&n);
    int c[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);

    }
int count = 0;
    for(int i=0; i<n; i++){
        if(c[i]!=0){
             for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    count++;
                    c[j]=0;
                    break;
                    }
                }           
        }
    }
    printf("%d", count);    
}
