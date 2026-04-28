#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    long long sum = 0;
    long long maxi = 0;

    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        sum += a;
        maxi += (a + x - 1) / x;
    }

    long long mini = (sum + x - 1) / x; 

    cout << mini << " " << maxi << "\n";
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