/*
 * Problem: https://codeforces.com/contest/1980/problem/A
 * V: WA, ET: 46ms , M: 12KB
 * @Me
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t, n, m, diffs[7], res;
    string prob;
    cin >> t;
    for(int i=0; i < t; i++){
        for(int j=0; j < 7; j++){
            diffs[j]=0;
        }
        res=0;

        cin >> n >> m;

        cin >> prob;

        for(int j=0; j < n; j++){
            diffs[(int)prob[j] - 65]++;
        }
        for(int j=0; j < 7; j++){
            int dis = m - diffs[j];
            if(dis > 0)
                res+=dis;
        }
        cout << res << endl;
    }
}
