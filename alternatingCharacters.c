#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i,k,cnt,t,j;
    char s1[100000];
    scanf("%d\n",&t);
    while(t--) {
        cnt=0;
        scanf("%s",s1);
        k=strlen(s1);
        for(i=0;i<k;i++) {
            if(s1[i]==s1[i+1]) {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
