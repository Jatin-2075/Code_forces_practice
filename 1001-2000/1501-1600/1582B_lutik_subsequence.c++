#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
        cin >> n;

        int cnt1 = 0, cnt0 = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 1) cnt1++;
            else if(x == 0) cnt0++;
        }

        long long ans = cnt1 * (1LL << cnt0);
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