int main() {

    int t;
    long long int k,tmp=0;
    scanf("%d\n",&t);
    while(t--){
    scanf("%lld\n",&k);
    if(k%2==0){
        tmp=k/2;
        tmp=tmp*tmp;
        printf("%lld\n",tmp);
    }
    else{
        tmp=k-1;
        tmp=tmp/2;
        tmp=tmp*tmp+k/2;
        printf("%lld\n",tmp);
    }
    }
    return 0;
}