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
    int m;
    scanf("%d",&m);
    int i,a[m];
    float p=0,n=0,z=0,r;
    float d = 0,b=0,c=0; 
    for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
      if(a[i]<0)
      {
          n++;
      }
      if(a[i]==0) 
      {
          z++;
      }        
      if(a[i]>0) 
      {
          p++;
      }
    }
    d=p/m;
    b=z/m;
    c=n/m;
    printf("%6f\n%6f\n%6f",d,c,b);
}
