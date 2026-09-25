#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    ll c;
    cin >> n >> c;

    vector<ll> nums(n);

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];

        ans += nums[i] - c;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n / 2; i++) {
        if (nums[i] < c) {
            ans += c - nums[i];
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}