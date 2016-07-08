#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int min, max, numOfSquares = 0,i = 1;
        cin >> min >> max;
        int square = pow(i, 2);
 
        while(square <= max){
            if(square < min) {
        } 
        else {
            numOfSquares++;
        }
        i++;
        square = pow(i,2);
    }
    cout << numOfSquares << "\n";
    }
    return 0;
}