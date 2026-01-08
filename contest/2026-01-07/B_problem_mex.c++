#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        map<int,int> mp;

        for(int i = 0; i < k; i++){
            mp[arr[i]]++;
        }

        int ans = 0;

        auto get_mex = [&](){
            int x = 0;
            while(mp[x] > 0) x++;
            return x;
        };

        ans = max(ans, get_mex());

        for(int i = k; i < n; i++){
            mp[arr[i-k]]--;
            mp[arr[i]]++;
            ans = max(ans, get_mex());
        }

        cout << ans << endl;
    }
}


// not done till now shit i mean 