#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
 
    int tmp[1000000],i,j,k,max;
    k=0;
    for(i=l;i<=r;i++){
        for(j=l;j<=r;j++) {
        tmp[k]=i^j;
        k++;
        }
    }
    max=0;
    for(i=0;i<k;i++){
        if(max<tmp[i])
            max=tmp[i];
    }
    return max;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
