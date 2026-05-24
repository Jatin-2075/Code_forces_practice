#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<long long> nums(n);

    long long mn = INT_MAX;
    long long mx = INT_MIN;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];

        mn = min(mn, nums[i]);
        mx = max(mx, nums[i]);
    }

    cout << (mx - mn + 1) / 2 << '\n';
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