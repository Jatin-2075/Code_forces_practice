#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int mult = n;
        vector<int>nums;
        while(n--){
            int a;
            cin >> a;
            nums.push_back(a);
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ans < nums[i]) ans = nums[i];
        }
        cout << ans * mult << endl;
    }
}