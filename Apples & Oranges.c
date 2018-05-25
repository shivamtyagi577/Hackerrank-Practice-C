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
long s,t;
scanf("%li%li",&s,&t);
long a,b;
scanf("%li%li",&a,&b);
long m,n;
scanf("%li%li",&m,&n);
int app[m],org[n],i,app_count=0,org_count=0,App=0,Org=0;
  for(i=0;i<m;i++)
  { 
   scanf("%d",&app[i]);
   app_count=a+app[i];
   if(app_count>=s && app_count<=t)
   {
   App++;
   }
  }
  for(i=0;i<n;i++)
  { 
   scanf("%d",&org[i]);
    org_count=b+org[i];
   if(org_count>=s && org_count<=t)
   {
   Org++;
   }
  }
  printf("%d\n%d",App,Org);
}
