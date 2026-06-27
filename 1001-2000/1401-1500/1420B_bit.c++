#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> nums(n);

    map<int, long long> freq;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];

        int msb = 63 - __builtin_clzll(nums[i]);
        freq[msb]++;
    }

    long long ans = 0;

    for(auto it : freq) {
        long long cnt = it.second;
        ans += (cnt * (cnt - 1)) / 2;
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