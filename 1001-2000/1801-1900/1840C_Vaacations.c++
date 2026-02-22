#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(n);

        long long streak = 0;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] <= q) {
                streak++;
            }
            else {
                if(streak >= k){
                    long long x = streak - k + 1;
                    ans += x * (x + 1) / 2;
                }
                streak = 0;
            }
        }

        if(streak >= k){
            long long x = streak - k + 1;
            ans += x * (x + 1) / 2;
        }

        cout << ans << '\n';
    }
}