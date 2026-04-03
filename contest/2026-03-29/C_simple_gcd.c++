#include <bits/stdc++.h>
using namespace std;

long long get_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long get_lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / get_gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        long long trash; cin >> trash;
    }

    if (n < 2) {
        cout << 0 << "\n";
        return;
    }

    vector<long long> g(n - 1);
    for (int i = 0; i < n - 1; i++) {
        g[i] = get_gcd(a[i], a[i+1]);
    }

    int count = 0;

    if (g[0] < a[0]) count++;

    if (g[n - 2] < a[n - 1]) count++;

    for (int i = 1; i < n - 1; i++) {
        long long required_lcm = get_lcm(g[i - 1], g[i]);
        
        if (required_lcm < a[i]) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}