/*
 * Problem: https://codeforces.com/gym/105079/problem/F
 * V: WA, ET: , M:
 * @ME
*/

#include <bits/stdc++.h>
using namespace std;

int steps(unsigned int cups){
    unsigned int flav, steps=0, pos=0;
    vector<unsigned int> avec[cups];
// Error is heres, avec has size cups, so if deliciusness is greater than cups, all fails.
    for(int i=0; i<cups; i++){
        cin >> flav;
        avec[flav-1].push_back(i);
    }

    for(int i=0; i<cups; i++){
        cout << i << " :";
        for(int j=0; j<avec[i].size(); j++){
            cout << avec[i][j] << " ";
        }
        cout << ";" << endl;
    }

    for(int i=0; i<cups; i++){
        unsigned int next;
        while(avec[i].size() > 0) {
            next = avec[i][0];
            cout << "next->" << next << endl;
            if(next > pos){
                steps += next - pos;
            } else if (next < pos ){
                steps += cups - pos + next;
            }
            pos = next;
            avec[i].erase(avec[i].begin());
        }
    }

    return steps;
}


int main(){
    int cases, cup;

    cin >> cases;

    int res[cases];

    for(int i=0; i<cases; i++){
        cin >> cup;
        res[i]=steps(cup);
    }

    for(int i=0; i<cases; i++){
        cout << res[i] << endl;
    }
}
