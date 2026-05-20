#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector <long long> nums;

    while(t--){
        int k , x;
        cin >> k >> x;

        long long ans = k * x + 1;
        nums.push_back(ans);

    }

    for(auto i : nums)cout << i << endl;
}