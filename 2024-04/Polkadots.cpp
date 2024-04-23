/*
 * Problem: https://codeforces.com/gym/105079/problem/B
 * V: AC, ET: 77ms, M: 100KB
 * @Me
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sq;
    bool prime = true;
    cin >> n;
    
    if(n == 2){
        cout << 4;
    } else {
        sq = sqrt(n) + 1;
        for(int i=2; i<sq; i++){
            if(n%i == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << n+1;
        } else {
            cout << n;
        }
    }
    
    return 0;
}

