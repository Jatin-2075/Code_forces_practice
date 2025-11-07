#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector <vector<int>> vectors(n, vector<int>(3));
    for(int i = 0; i < n ; ++i){
        for(int m = 0; m <3; ++m){
            cin >> vectors[i][m];
        }
    }

    int x = 0, y = 0, z = 0;
    
    for(int i = 0; i < n; ++i){
        x += vectors[i][0];
        y += vectors[i][1];
        z += vectors[i][2];
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
}