#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverse(char str[]){
    int i,j;
    char temp[10000];
    for(i=strlen(str)-1,j=0; i+1!=0; --i,++j)
    {
        temp[j]=str[i];
    }
    temp[j]='\0';
    strcpy(str,temp);
}
int main() {
    char arr[10000],b[10000];
    int t,cnt=0,i=0,tmp;
    scanf("%d",&t);
    while(t--) {
    cnt=0;
	scanf("%s",arr);
	strcpy(b,arr);
    reverse(b);
        if(strcmp(arr,b)== 0)
            printf("%d\n",cnt);
	   else {
            i=0;
	       while(i<(strlen(arr))/2) {
		      tmp=(((int)arr[i])-((int)b[i]));
		      (tmp>0)?(cnt+=tmp):(cnt-=tmp);
		      i++;
	       }
            printf("%d\n",cnt);
        }
	}
    return 0;
}
