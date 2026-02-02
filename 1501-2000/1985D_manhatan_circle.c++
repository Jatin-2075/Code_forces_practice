#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int m, n;
        cin >> m >> n;
        int firsti = 0, firstj = 0, secondi = 0, secondj = 0;
        bool check = true;

        vector<vector<char>> circle(m, vector<char>(n));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> circle[i][j];
                if(circle[i][j] == '#' && check){
                    check = false;
                    firsti = i;
                    firstj = j;
                }
                if(circle[i][j] == '#' && !check){
                    secondi = i;
                    secondj = j;
                }
            }
        }
        int ci = (firsti + secondi) / 2;
        int cj = (firstj + secondj) / 2;

        cout << ci + 1 << " " << cj + 1 << endl;

    }
}