#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,m=5;
    int ppl=0;
    int tppl=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        ppl=(m/2);
        tppl=tppl+ppl;
        m=ppl*3;
    }
    printf("%d",tppl);
    return 0;
}
