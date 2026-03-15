#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p;
    long long m;
    cin >> n >> k >> p >> m;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long wincost = a[p];

    long long firstpplaycost = wincost;
    
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    
    for (int i = 1; i < p; i++) {
        pq.push(a[i]);
        if (pq.size() > k - 1) {
            firstpplaycost += pq.top();
            pq.pop();
        }
    }

    if (m < firstpplaycost) {
        cout << 0 << "\n";
        return;
    }

    long long costplay = wincost;
    vector<long long> remain;
    
    for (int i = 1; i <= n; i++) {
        if (i != p) remain.push_back(a[i]);
    }
    
    sort(remain.begin(), remain.end(), greater<long long>());
    
    for (int i = k - 1; i < remain.size(); i++) {
        costplay += remain[i];
    }

    long long ans = 1 + (m - firstpplaycost) / costplay;
    cout << ans << "\n";
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