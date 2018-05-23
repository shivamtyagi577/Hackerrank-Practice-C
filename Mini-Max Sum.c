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
  long i,a[5],s=0,max=0,min=0,k=0;
  for(i=0;i<5;i++)
  {
    scanf("%li",&a[i]);
    s=s+a[i];
  }
  max=s-a[0];
  min=s-a[0];
  for(i=1;i<5;i++)
  {
    k=s-a[i];
    if(k>=max)
    {
      max=k;
    }
    if(k<=min)
    {
      min=k;
    }
  }
  printf("%li\t%li",min,max);
}
