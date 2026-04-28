#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    s = s + s;

    long long ones = 0, onesmax = 0;

    for(int i = 0; i < 2*n; i++){
        if(s[i] == '1') ones++;
        if(s[i] == '0') ones = 0;
        onesmax = max(ones, onesmax);
    }

    long long ans = 0;

    for(int i = 0; i < 2*n; i++){
        ans = max(ans, 1LL * i * (onesmax - i + 1));
    }

    if(onesmax >= n){
        ans = 1LL * n * n;
    }
    cout << ans << "\n";
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