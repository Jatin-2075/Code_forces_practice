#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ,odd = 0;
    cin >> n;
    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] % 2 != 0)odd++;
    }

    if(odd % 2 == 0){
        cout << "YES";
    }
    else cout << "NO";

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}