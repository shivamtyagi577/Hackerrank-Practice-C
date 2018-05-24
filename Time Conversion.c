#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int hh,mm,ss;
   char t[3];
  scanf("%d:%d:%d%s",&hh,&mm,&ss,t);
  
if(strcmp(t,"AM")==0 && hh==12)
{
  hh=0;
  
}
  else 
  {
  
  }
  if(strcmp(t,"PM")==0 && hh!=12)
  {
    hh+=12;
  }
   printf("%02d:%02d:%02d",hh,mm,ss);
}
