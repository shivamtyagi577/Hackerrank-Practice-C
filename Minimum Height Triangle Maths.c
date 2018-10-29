#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lowestTriangle(int base, int area)
{
    // Complete this function
    int h;
    h=(2*area)/base;
    if(h*base<2*area)
    {
        h=h+1;
    }
    return h;
}

int main() {
    int base; 
    int area; 
    scanf("%d %d", &base, &area);
    int height = lowestTriangle(base, area);
    printf("%d\n", height);
    return 0;
}
