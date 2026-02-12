#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long sum2 = 0;
        long long best1 = LLONG_MAX;
        long long best2 = LLONG_MAX;

        for(int i = 0; i < n; i++){
            int m;
            cin >> m;

            vector<long long> a(m);
            for(int j = 0; j < m; j++)
                cin >> a[j];

            sort(a.begin(), a.end());

            long long s1 = a[0];
            long long s2 = a[1];

            sum2 += s2;

            best1 = min(best1, s1);
            best2 = min(best2, s2);
        }

        long long ans = sum2 - best2 + best1;

        cout << ans << "\n";
    }
}
