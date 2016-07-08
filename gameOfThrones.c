#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
     
    int flag = 0,i,j,oddcount=0,length=0;
    char ch;
    int count[26];
    for(j=0;j<=26;j++){
        count[j]=0;
        }
    j=0;
    while(arr[i]!='\0')
    {
        ch=arr[i];
        count[ch-97]+=1;
        i++;
    }
    length=strlen(arr);
    for(j=0;j<26;j++){
        if(count[j]%2!=0)
            oddcount++;
        }
    if(((oddcount==0)&&(length%2==0))||((length%2!=0)&&(oddcount==1)))
            flag=0;
    else
            flag=1;
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
