#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the staircase function below.
void staircase(int n) {


}
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,k,l;
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=i-1;j++)
    {
     printf("\t");
    }
    for(j=1;j<=n-i+1;j++)
    {
      printf("#");
    }
    printf("\n");
 }
}

//----------------------------------------Another solution------------------------

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
  int m,i,j;
  m=n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(j>=m-1)
      {
        printf("#");
      }
      else
      {
      printf(" ");  
      }
    }
    printf("\n");
    m=m-1;
  }
}
