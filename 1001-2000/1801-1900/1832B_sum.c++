#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<long long> pre(n + 1, 0);
    for(int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + nums[i];
    }

    long long total = pre[n];
    long long ans = 0;

    for(int x = 0; x <= k; x++) {
        long long removeLeft = pre[2 * x];

        int r = k - x;
        long long removeRight = pre[n] - pre[n - r];

        ans = max(ans, total - removeLeft - removeRight);
    }

    cout << ans << '\n';
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