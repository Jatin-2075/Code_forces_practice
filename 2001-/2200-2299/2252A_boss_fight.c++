#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<ll> nums(n);
    ll sum = 0, maxfreq = 0, maxvalue = 0;

    unordered_map<ll, ll> mpp;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        sum += nums[i];
        mpp[nums[i]]++;

        if (mpp[nums[i]] > maxfreq) {
            maxfreq = mpp[nums[i]];
            maxvalue = nums[i];
        }
    }

    if (maxfreq > (n + 1) / 2) {
        ll others = n - maxfreq;

        sum -= maxvalue * maxfreq;
        sum += (others + 2) * maxvalue;
    }

    cout << sum << endl;
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