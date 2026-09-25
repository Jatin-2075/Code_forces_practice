#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<ll>a = nums;
    vector<int>last(n,0);

    int reset = 0;

    for(int i = 0; i < m; i++){
        int b, c;
        cin >> b >> c;
        b--;

        if(last[b] < reset){
            a[b] = nums[b];
            last[b]=reset;
        }

        a[b] += c;

        if(a[b] > h){
            reset++;
        }
    }

    for(int i = 0; i < n; i++){
        if(last[i] == reset) cout << a[i] << " ";
        else cout << nums[i] << " ";
    }
    cout << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}