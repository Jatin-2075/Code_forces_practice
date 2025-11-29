#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int mpos, npos;
    int steps = 0;

    for(int m = 0; m < 5; m++){
        for(int n = 0; n < 5; n++){
            cin >> matrix[m][n];
            if (matrix[m][n] == 1){
                mpos = abs(m - 2);
                npos = abs(n - 2);
            }
        }
    }
    steps = mpos + npos;
    cout << steps;
    
}