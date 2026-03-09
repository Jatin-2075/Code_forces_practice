#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, D;
    cin >> n >> D;

    vector<long long> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    long long l = 0, r = n - 1;
    long long wins = 0;

    while(l <= r) {
        long long need = D / p[r] + 1;

        if(need <= (r - l + 1)) {
            wins++;
            l += need - 1;
            r--;
        } else {
            break;
        }
    }

    cout << wins << "\n";
}