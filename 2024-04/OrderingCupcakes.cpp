/*
 * Problem: https://codeforces.com/gym/105079/problem/A
 * V: AC, ET: 61ms ,M: 0KB
 * @Me
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int invs, flavors,flavor;
    
    cin >> invs >> flavors;
    
    vector<int> list(flavors, 0);
    
    
    
    for (int i = 0; i < invs; ++i) {
        cin >> flavor;
        list[flavor - 1]++;
    }
    int res; 
    for (int i = 0; i < flavors; ++i) {
        res = list[i] / 12;
	    if(res%12 != 0)
		    res++;
        cout << res << endl;
    }
    

    return 0;
}

