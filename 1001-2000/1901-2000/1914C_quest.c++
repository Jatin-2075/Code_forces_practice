#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        long long ans = 0, sum = 0, bestb = 0;

        for(int i = 0; i < n && i < k; i++){
            sum += a[i];
            bestb = max(bestb, b[i]);

            long long rem = k - (i+1);
            ans = max(ans, sum + bestb * rem);
        }

        cout << ans << "\n";
    }
}
