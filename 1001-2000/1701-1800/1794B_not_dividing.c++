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
        int maxoperation = 2 * n, operations = 0;
        vector<int> nums(n);

        for(int i = 0; i < n; i++){
            cin >> nums[i];

            if(i!=0){
                if(nums[i-1] == 1) nums[i-1] = 2;
                if(nums[i] == 1) nums[i] = 2;
                while(nums[i] % nums[i-1] == 0){
                    if(operations >= maxoperation)break;
                    operations++;
                    nums[i]++;
                }
            }
        }
        for(auto h : nums)cout << h << " ";
        cout << "\n";
    }
}