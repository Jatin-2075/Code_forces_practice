#include <bits/stdc++.h>
using namespace std;

struct custom_hash {
    size_t operator()(int x) const {
        x = ((x >> 16) ^ x) * 0x45d9f3b;
        x = ((x >> 16) ^ x) * 0x45d9f3b;
        x = (x >> 16) ^ x;
        return x;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        unordered_map<int, int, custom_hash> chains;
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            if(chains[a[i] - 1] > 0){
                chains[a[i] - 1]--;
                chains[a[i]]++;
            } else {
                ans++;
                chains[a[i]]++;
            }
        }

        
        cout << ans << "\n";
    }
    return 0;
}