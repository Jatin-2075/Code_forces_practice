#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while(t--){
            long long n, x, y;
            cin >> n >> x >> y;

            vector<long long> a(n);
            long long total_transferable = 0;

            for(int i = 0; i < n; i++) {
                cin >> a[i];
                total_transferable += (a[i] / x) * y;
            }

            long long max_money = 0;

            for(int i = 0; i < n; i++) {
                
                long long current_contribution = (a[i] / x) * y;
                long long current_total = a[i] + (total_transferable - current_contribution);
                
                if (current_total > max_money) {
                    max_money = current_total;
                }
            }

            cout << max_money << "\n";
        }
    }
    return 0;
}