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
