#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,cnt,d,tmp;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        cnt=0;
        tmp=n;
        while(n) {
            d=n%10;
            if(d!=0) 
                cnt+=(tmp%d==0)?1:0;
            n/=10;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
