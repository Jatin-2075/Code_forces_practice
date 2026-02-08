#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , m;
    cin >> n >> m;
    long long count = 0;

    vector<int> nums;

    while(m--){
        long long a ;
        cin >> a;
        nums.push_back(a);
    }
    long long curr = 1;
    for(int x : nums){
        if(x >= curr) count += x - curr;
        else count += (n-curr) + x;
        curr = x;
    }
    cout << count;
}