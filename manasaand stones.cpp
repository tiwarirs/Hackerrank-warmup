#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long int n,a,b;
    cin>>t;
    while(t--)
    {
        int i =0;
        long int answer;
        cin>>n;
        cin>>a;
        cin>>b;
        if(a==b) {   
            answer = a*(n-1);
            cout<<answer;
        }
        else
        for(i=0;i<n;i++) {
            if(b<=a)
                answer = i*a + (n-1-i)*b;
            else
                answer = (n-1-i)*a + i*b;
            cout<<answer<<" ";
        }
        cout<<"\n";
    }    
    return 0;
}
