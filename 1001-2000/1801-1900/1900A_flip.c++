#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int dots = 0;
    bool triple = false;

    for(int i = 0; i < n; i++) {
        if(s[i] == '.') dots++;
    }

    for(int i = 0; i + 2 < n; i++) {
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            triple = true;
        }
    }

    if(triple) cout << 2 << "\n";
    else cout << dots << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}