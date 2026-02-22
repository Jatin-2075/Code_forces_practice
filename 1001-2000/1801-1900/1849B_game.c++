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

        vector<pair<long long, int>> nums;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;

            long long r = a % k;
            if(r == 0) r = k;

            nums.push_back({-r, i+1});
        }
        sort(nums.begin(), nums.end());

        for(auto &p : nums){
            cout << p.second << " ";
        }
        cout << "\n";
    }
}