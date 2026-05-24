#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> ans;
    int flips = 0;

    for(int i = n; i >= 1; i--) {
        long long val = a[i];

        if(flips % 2) {
            val = -val;
        }

        if(val > 0) {
            ans.push_back(i);
            flips++;
        }
    }

    cout << ans.size() << '\n';

    for(int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}