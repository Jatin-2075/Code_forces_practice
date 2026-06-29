#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long ans = 0;

    for(int i = 1; i <= n; i++){
        long long cnt = n / i;
        ans += cnt * cnt;
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