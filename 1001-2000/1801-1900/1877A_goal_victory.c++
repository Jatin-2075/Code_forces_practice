#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n - 1; i++){
        long long a;
        cin >> a;
        sum += a;
    }
    cout << -sum << "\n";
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