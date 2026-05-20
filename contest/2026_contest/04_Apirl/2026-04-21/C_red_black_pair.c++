#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];

    if (n == 1) {
        cout << (s[0][0] != s[1][0] ? 1 : 0) << "\n";
        return;
    }

    int firstone = 0;
    int secondone = (s[0][0] != s[1][0] ? 1 : 0);

    for (int i = 1; i < n; i++) {
        int verticost = (s[0][i] != s[1][i] ? 1 : 0);
        int horicost = (s[0][i-1] != s[0][i] ? 1 : 0) + (s[1][i-1] != s[1][i] ? 1 : 0);
        
        int current = min(secondone + verticost, firstone + horicost);
        firstone = secondone;
        secondone = current;
    }

    cout << secondone << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}