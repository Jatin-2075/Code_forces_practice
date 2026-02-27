#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        ll low = 1, high = 2e18, ans = 0;

        while(low <= high){
            ll mid = (low + high)/2;

            ll cnt = mid - mid/n;

            if(cnt >= k){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << "\n";
    }
}