#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m,y=0,z,x;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0; 
        answer = n/c;
        x=answer;
        while (x / m > 0) {
                     y += c / m;
                     x = (c / m) + (c % m);
              }
        answer=answer+y;
        printf("%d\n",answer);
    }
    return 0;
}
