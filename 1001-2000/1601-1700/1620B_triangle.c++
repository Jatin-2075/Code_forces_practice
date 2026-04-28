#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long w, h;
        cin >> w >> h;

        long long k, x;

        cin >> k;
        long long first, last;
        cin >> first;
        for(int i = 1; i < k; i++) {
            cin >> x;
            if(i == k-1) last = x;
        }
        long long ans = (last - first) * h;

        cin >> k;
        cin >> first;
        for(int i = 1; i < k; i++) {
            cin >> x;
            if(i == k-1) last = x;
        }
        ans = max(ans, (last - first) * h);

        cin >> k;
        cin >> first;
        for(int i = 1; i < k; i++) {
            cin >> x;
            if(i == k-1) last = x;
        }
        ans = max(ans, (last - first) * w);

        cin >> k;
        cin >> first;
        for(int i = 1; i < k; i++) {
            cin >> x;
            if(i == k-1) last = x;
        }
        ans = max(ans, (last - first) * w);

        cout << ans << "\n";
    }
}