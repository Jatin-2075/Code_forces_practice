#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int faults = 0;
    
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            faults++;
        }
    }

    if (faults <= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}