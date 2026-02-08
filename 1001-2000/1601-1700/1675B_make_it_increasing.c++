#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];

        if(n <= 1){
            cout << 0 << endl;
            continue;
        }

        int count = 0;
        bool ok = true;

        for(int i = n - 1; i > 0; i--){
            while(nums[i-1] >= nums[i]){
                if(nums[i-1] == 0){
                    ok = false;
                    break;
                }
                nums[i-1] /= 2;
                count++;
            }
            if(!ok) break;
        }

        if(!ok) cout << -1 << endl;
        else cout << count << endl;
    }
}
