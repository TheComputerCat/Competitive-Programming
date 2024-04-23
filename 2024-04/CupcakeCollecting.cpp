/*
 * Problem: https://codeforces.com/gym/105079/problem/E
 * V: AC, ET: 812ms, M: 5200KB
 * @Me
*/

#include<iostream>
#include<vector>
using namespace std;

int DFS(vector<vector<int>> &arr, vector<vector<int>> &mem, int N, int crrX, int crrY){
    if(mem[crrX][crrY] != -2)
        return mem[crrX][crrY];

    if(arr[crrX][crrY] == -1){
        mem[crrX][crrY] = -1;
        return -1;
    }
    int down = -1, right = -1, maxV;

    if(crrX + 1 < N)
        down = DFS(arr, mem, N, crrX + 1, crrY);

    if(crrY + 1 < N)
        right = DFS(arr, mem, N, crrX, crrY + 1);

    maxV = max(down, right);

    if(maxV == -1){
        mem[crrX][crrY]=-1;
        return -1;
    }

    mem[crrX][crrY] = maxV + arr[crrX][crrY];

    return mem[crrX][crrY];
}

int main(){
    size_t N;
    int ax;

    cin >> N;

    vector<vector<int>> arr, mem(N, vector<int> (N, -2));
    for(int i=0; i<N; i++){ 
        vector<int> row;
        for(int j=0; j<N; j++){
            cin >> ax;
            row.push_back(ax);
        }
        arr.push_back(row);
    }

    mem[N-1][N-1] = 0;
    
    cout << DFS(arr, mem, N, 0, 0);

    return 0;
}
