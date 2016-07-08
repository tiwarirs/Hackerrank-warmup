#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned int reverseBits(unsigned int num)
{
    unsigned int  NO_OF_BITS =4294967295;
    unsigned int reverse_num = 0;
    reverse_num=NO_OF_BITS-num;
    printf("%u\n",reverse_num);
    return 0;
}
int main() {
    
    int t;
    unsigned int no;
    scanf("%d\n",&t);
    while(t--){
        scanf("%u\n",&no);
        reverseBits(no);
    }
    return 0;
}
