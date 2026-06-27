#include <bits/stdc++.h>
using namespace std;

bool check(long long bits, int n, int k){
    long long q = bits / k;
    long long r = bits % k;

    if(q >= 30)return false;

    long long pw = 1LL << q;

    long long cost = (long long)(k + r)* pw -k;
    return cost <= n;
}

void solve() {
    int n, k;
    cin >> n >> k;

    long long low = 0, high = n, ans = 0;

    while(low <=high){
        long long mid = low + (high - low) / 2;

        if(check(mid, n, k)){
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans <<"\n";

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