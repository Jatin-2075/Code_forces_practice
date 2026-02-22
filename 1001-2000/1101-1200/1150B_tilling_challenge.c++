#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> g(n);
    for(int i = 0; i < n; i++) cin >> g[i];

    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < n-1; j++){

            if(g[i][j]=='.' &&
               g[i-1][j]=='.' &&
               g[i+1][j]=='.' &&
               g[i][j-1]=='.' &&
               g[i][j+1]=='.')
            {
                g[i][j]   = '#';
                g[i-1][j] = '#';
                g[i+1][j] = '#';
                g[i][j-1] = '#';
                g[i][j+1] = '#';
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == '.'){
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
}
