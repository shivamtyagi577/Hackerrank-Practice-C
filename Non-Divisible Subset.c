
  
#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }

int max(int a, int b) { return a > b ? a : b; }

int main() {
  int n, k, a, total = 0;
  scanf("%d %d", &n, &k);
  int mods[k];
  for (int i = 0; i < k; i++)
    mods[i] = 0;
  while (n--) {
    scanf("%d", &a);
    mods[a % k]++;
  }
  // can only have 1 value congruent to 0 mod k
  total += min(1, mods[0]);
  // if even, can only have 1 value congruent to k/2 mod k
  if (k % 2 == 0)
    total += min(1, mods[k / 2]);
  // for all others, pick max of those k and n-k mod k
  for (int d = 1; d < (k + 1) / 2; d++) { // for all others,
    total += max(mods[d], mods[k - d]);
  }
  printf("%d", total);
  return 0;
}






*************** Another Solution But with a Run Time Error***************************

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int min(int a, int b) { return a < b ? a : b; }

//int max(int a, int b) { return a > b ? a : b; }

int main() {
  int n, k, i, a, total = 0;
  scanf("%d %d", &n, &k);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      arr[i]-=k;
      if(arr[i]<0)
      {
          arr[i]*=-1;
      }
  }
  //printf("%d",total);
  for(i=0;i<n;i++)
  {
      int c=i+1;
     
      while(c!=n)
      {
          int sum=arr[i]+arr[c];
          if((sum%k)==0)
          {
              total++;
          }
      }
  }
  printf("%d",total);

}
