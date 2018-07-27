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
    int h[26],i,len,max=0,area;
    for(i=0;i<26;i++)
    {
       scanf("%d",&h[i]) ;
        
    }
    char word[10];
    scanf("%s",word);
    len=strlen(word);
    
    int arr[len];
    
    for(i=0;i<len;i++)
    {
        switch(word[i])
        {
            case 'a':
                     arr[i]=h[0];
                     break;
            case 'b':
                     arr[i]=h[1];
                     break;
            case 'c':
                     arr[i]=h[2];
                     break;
                case 'd':
                     arr[i]=h[3];
                     break;
                case 'e':
                     arr[i]=h[4];
                     break;
                case 'f':
                     arr[i]=h[5];
                     break;
                case 'g':
                     arr[i]=h[6];
                     break;
                case 'h':
                     arr[i]=h[7];
                     break;
                case 'i':
                     arr[i]=h[8];
                     break;
                case 'j':
                     arr[i]=h[9];
                     break;
                case 'k':
                     arr[i]=h[10];
                     break;
                case 'l':
                     arr[i]=h[11];
                     break;
                case 'm':
                     arr[i]=h[12];
                     break;
                case 'n':
                     arr[i]=h[13];
                     break;
                case 'o':
                     arr[i]=h[14];
                     break;
                case 'p':
                     arr[i]=h[15];
                     break;
                case 'q':
                     arr[i]=h[16];
                     break;
                case 'r':
                     arr[i]=h[17];
                     break;
                case 's':
                     arr[i]=h[18];
                     break;
                case 't':
                     arr[i]=h[19];
                     break;
                case 'u':
                     arr[i]=h[20];
                     break;
                case 'v':
                     arr[i]=h[21];
                     break;
                case 'w':
                     arr[i]=h[22];
                     break;
                case 'x':
                     arr[i]=h[23];
                     break;
                case 'y':
                     arr[i]=h[24];
                     break;
                case 'z':
                     arr[i]=h[25];
                     break;
                
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
      area=max*len;
    printf("%d",area);
    
}
