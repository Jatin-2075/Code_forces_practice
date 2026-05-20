#include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        total_sum += a;
    }
    if (total_sum % 2 != 0) {
        cout << "YES\n";
    } 
    else if ((n * k) % 2 == 0) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}