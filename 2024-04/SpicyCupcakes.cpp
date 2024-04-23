/*
 * Problem: https://codeforces.com/gym/105079/problem/D
 * V: AC, ET: 46ms, M: 0KB
 * @Me
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

#define ll long long
using namespace std;

bool compareDes(int a, int b) {
    return a > b;
}

ll evaluete(ll A, ll B,vector<ll> values){
    ll res = 0, cnt = 0;
    for (ll val : values) {
        res += (cnt + 1)*(A*val + B);
        cnt++;
    }
    return res;
}

int main() {
    ll N, A, B;
    vector<ll> values;
    string input;
    
    cin >> N >> A >> B;

    cin.ignore();

    getline(cin, input);

    istringstream iss(input);
    ll num;
    while (iss >> num) {
        values.push_back(num);
    }
    
    if(A > 0){
        sort(values.begin(), values.end());
    } else {
        sort(values.begin(), values.end(), compareDes);
    }
    
    cout << evaluete(A, B, values);

    return 0;
}

