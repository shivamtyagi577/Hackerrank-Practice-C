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
  long n;
  scanf("%li",&n);
  long a[n]; 
  long k=0,Max=0;
  for(int i=0;i<n;i++)
  {
    scanf("%li",&a[i]);
    if(a[i]>=Max)
    {
       Max=a[i];
    }
  }
  for(int j=0;j<n;j++)
  {
    
    if(a[j]==Max)
    {
      k++;
    }
  }
  printf("%li",k);
  
}
