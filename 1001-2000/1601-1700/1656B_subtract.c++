#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int l = 0, r = 1;

    while(r < n) {

        long long diff = a[r] - a[l];

        if(diff == k) {
            cout << "YES\n";
            return;
        }

        if(diff < k) {
            r++;
        }
        else {
            l++;

            if(l == r) {
                r++;
            }
        }
    }

    cout << "NO\n";
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