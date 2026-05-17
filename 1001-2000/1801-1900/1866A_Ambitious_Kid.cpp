#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long a = INT_MAX;
    for(int i = 0; i < n; i++) {
        long long c;
        cin >> c;
        a = min(a, abs(c));
    }
    cout << a;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}