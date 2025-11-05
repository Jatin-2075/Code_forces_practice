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
    int count = 0;
    for(int i = 0; i < n; i++){
        int temp = vectors[i][0] + vectors[i][1] + vectors[i][2];
        if(temp == 0){
            count++;
        }
    }
    if(count == 3){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
}