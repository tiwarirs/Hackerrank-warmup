#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,n,gcd = 0;
    cin>>t;
    while(t--) {
        cin>>n;
        int flag = 0;
        int array[n];
        for(int i=0;i<n;i++) {
            cin>>array[i];
        }
        if(n == 1){
            cout << "NO" << endl;
        continue;
        }
        for(int j = 0; j < (n - 1); j++){
            for(int k = j+1; k < n; k++){
                int div = 2;
                while(div <= max(array[k], array[j])){
                    if((array[k] % div == 0) && (array[j] % div == 0)){
                        flag = 1;
                        break;
                    }
                    if(div == max(array[k], array[j])){
                        flag = 0;
                    }
                    div++;
                }
        }
 
        if(!flag){
            cout << "YES" << endl;
        break;
        }
    }
    if(flag){
        cout << "NO" << endl;
    }
}
    return 0;
}
