#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;
        long long free_gain = 0;
        long long max_gain = LLONG_MIN;

        while(n--){
            long long a, b, c;
            cin >> a >> b >> c;
            free_gain += (b - 1) * a;
            max_gain = max(max_gain, b * a - c );
        }

        if(free_gain >= x) cout << 0 << endl;
        else if(max_gain <= 0) cout << -1 << endl;
        else {
            long long ik = x - free_gain;
            long long ans = (ik + max_gain - 1) / max_gain;
            cout << ans << endl;
        }
    }
}