/*
 * Problem: https://codeforces.com/gym/105079/problem/C
 * V: AC, ET: 62ms, M: 100KB
 * @Me
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct circle {
    int r, x, y;
};

bool inCircle(int cx, int cy, int r, int x, int y){
    return sqrt(pow((cx-x), 2) + pow((cy -y), 2)) <= r; 
}

bool inAFroCircle(vector<circle> circles, int x , int y) {
    for(circle circle: circles) {
        if(inCircle(circle.x, circle.y, circle.r, x ,y)){
            return true;
        }
    }
    return false;
    
}

int main() {
    int n, r, ri, xi, yi, pts = 0;
    cin >> n >> r;
    vector<circle> circles;
    
    for(int i = 0; i < n; i++){
        cin >> ri >> xi >> yi;
        circles.push_back({ri, xi, yi});
    }
    
    for(int x=-r; x <= r; x++){
        for(int y=-r; y <= r; y++){
            if(inCircle(0 ,0 , r, x , y)){
                //cout << x << " " << y << endl;
                if(inAFroCircle(circles, x, y)){
                    pts++;
                }
            }
        }
    }
    cout << pts;
    
    return 0;
}

