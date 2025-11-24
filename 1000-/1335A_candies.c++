#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <long long> nums;

    while(n--){
        int a;
        cin >> a;

        long long b = (a - 1)/2;

        nums.push_back(b);
    }

    for(int i : nums){
        cout << i << endl;
    }
}