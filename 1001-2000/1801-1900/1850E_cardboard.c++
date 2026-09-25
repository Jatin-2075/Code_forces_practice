#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool check(ll w, const vector<ll>& nums, ll total) {
    __int128 sum = 0;

    for (ll x : nums) {
        __int128 side = x + 2LL * w;
        sum += side * side;

        if (sum > total)
            return false;
    }

    return sum <= total;
}

void solve() {
    ll n, total;
    cin >> n >> total;

    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    ll left = 1, right = 1e9;
    ll ans = -1;

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (check(mid, nums, total)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << endl;
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