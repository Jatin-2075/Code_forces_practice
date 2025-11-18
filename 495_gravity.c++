#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b = n;

    vector <long long> nums;

    while(b--){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] > nums[j]){
                swap(nums[i], nums[j]);
            }
        }
    }

    for(auto it : nums){
        cout << it << " ";
    }
}