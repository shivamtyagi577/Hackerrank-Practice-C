#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main()
{
    int n,i,j,a,min=-1,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    qsort(arr,n,sizeof(int),cmpfunc);
   // printf("\nAfter sorting the list is: \n");
  // for( i = 0 ; i < n; i++ ) {   
   //   printf("%d ",arr[i]);
   //}
   // printf("%d",n);
   a=n;
    for(i=0;i<n;i++)
    {
        //a=n;
        min=arr[i];
        if(min <=0)
        {
            
            cnt++;
            a=n-cnt;
            //printf("%d\n",a);
            //printf("%d\n",cnt);

            continue;
           // printf("*****");
        }
        for(j=i;j<n;j++)
        {
            arr[j]-=min;
          //  printf("%d",arr[j]);
        }
        cnt++;
        //a=n-cnt;
      printf("%d\n",a);
        a=n-cnt;
        
        
    }   
}
