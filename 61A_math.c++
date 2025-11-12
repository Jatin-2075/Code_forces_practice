#include <bits/stdc++.h>
using namespace std;

int main() {
    string m, n;
    cin >> m >> n;
    string ans = "";

    for(int i = 0; i < m.size(); ++i){
        char u = '0';
        if(m[i] != n[i]){
            u = '1';
        }
        ans += u;
    }
    cout << ans;
    return 0;
}