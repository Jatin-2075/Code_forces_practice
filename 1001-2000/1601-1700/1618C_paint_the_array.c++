#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int odd_gcd = 0;
    int even_gcd = 0;

    for(int i = 0; i < n; i += 2) {
        odd_gcd = __gcd(odd_gcd, nums[i]);
    }

    for(int i = 1; i < n; i += 2) {
        even_gcd = __gcd(even_gcd, nums[i]);
    }

    bool ok = true;

    for(int i = 1; i < n; i += 2) {
        if(nums[i] % odd_gcd == 0) {
            ok = false;
            break;
        }
    }

    if(ok) {
        cout << odd_gcd << "\n";
        return;
    }

    ok = true;

    for(int i = 0; i < n; i += 2) {
        if(nums[i] % even_gcd == 0) {
            ok = false;
            break;
        }
    }

    if(ok) {
        cout << even_gcd << "\n";
    }
    else {
        cout << 0 << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}