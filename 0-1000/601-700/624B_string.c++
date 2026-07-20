#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    long long ans = 0;
    int prev = INT_MAX;

    for (int i = 0; i < n; i++) {
        int take = min(a[i], prev - 1);

        if (take < 0)
            take = 0;

        ans += take;
        prev = take;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}