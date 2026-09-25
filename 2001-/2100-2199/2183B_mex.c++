#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    set<ll>set;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        set.insert(nums[i]);
    }
    ll mex = 0;

    while(set.count(mex)){
        mex++;
    }

    cout << min(mex, k - 1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}