#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n), k(q);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> k[i];

    vector<long long> pref(n), mx(n);

    pref[0] = a[0];
    mx[0] = a[0];

    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
        mx[i] = max(mx[i - 1], a[i]);
    }

    for(int i = 0; i < q; i++) {
        int pos = upper_bound(mx.begin(), mx.end(), k[i]) - mx.begin() - 1;

        if(pos < 0) cout << 0 << " ";
        else cout << pref[pos] << " ";
    }

    cout << '\n';
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