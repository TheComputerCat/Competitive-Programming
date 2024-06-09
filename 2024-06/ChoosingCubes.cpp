/*
 * Problem: https://codeforces.com/contest/1980/problem/B
 * V: WA, ET:108ms, M: 0KB
 * @Team
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, f, k, favNum;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n >> f >> k;
        int arr[n];

        for(int j=0; j<n;j++){
            cin >> arr[j];
        }

        favNum=arr[f-2];

        sort(arr, arr + n, greater<int>());

        int knum = arr[k-1], kplusnum;
        if (k <= n-1){
            kplusnum = arr[k];
        }else{
            kplusnum=101;
        }

        //cout << knum << " " << kplusnum << " " << favNum << endl;

        if(knum == favNum){
            if(k == n || kplusnum < favNum){
                cout << "YES";
            }else if(kplusnum == favNum){
                cout << "MAYBE";
            }
        }else if(knum > favNum){
            cout << "NO";
        }else if(knum < favNum){
            cout<< "YES";
        }
        cout << endl;

    }

}
