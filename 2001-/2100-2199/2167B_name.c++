#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    map<char, int> mpp, test;

    for(char c : s) mpp[c]++;
    for(char c : t) test[c]++;

    bool veri = true;

    for(char c = 'a'; c <= 'z'; c++){
        if(mpp[c] != test[c]){
            veri = false;
            break;
        }
    }

    cout << (veri ? "YES" : "NO") << "\n";
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