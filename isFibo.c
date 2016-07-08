#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isFibo(long long n)
{
    long long a=-1,b=1,c=0;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c==n;
}
int main() {

    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld\n",&n);
        if(isFibo(n))
            printf("IsFibo\n");
        else
            printf("IsNotFibo\n");
        
    }
    return 0;
}
