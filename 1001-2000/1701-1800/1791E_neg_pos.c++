#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        long long sum = 0;
        int neg = 0;
        long long mn = LLONG_MAX;

        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if(x < 0) neg++;

            sum += abs(x);
            mn = min(mn, abs(x));
        }

        if(neg % 2 == 0) {
            cout << sum << "\n";
        } else {
            cout << sum - 2 * mn << "\n";
        }
    }
}