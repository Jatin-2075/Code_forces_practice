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

        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            int diff = (k - a[i] % k) % k;
            ans = min(ans, diff);
        }
        if(k == 4){
            int evens = 0;
            for(int x : a)
                if(x % 2 == 0) evens++;

            int evenCost;
            if(evens >= 2) evenCost = 0;
            else if(evens == 1) evenCost = 1;
            else evenCost = 2;

            ans = min(ans, evenCost);
        }

        cout << ans << "\n";
    }
}
