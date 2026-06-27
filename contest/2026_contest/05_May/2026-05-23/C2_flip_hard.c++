#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<long long> preffix(n), suffix(n + 1);
    preffix[0] = abs(a[0]);
    for (int i = 1; i < n; i++)
        preffix[i] = preffix[i - 1] + abs(a[i]);
    
    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] + a[i];

    long long niceone = suffix[0];
    int idx = -1;
    for (int i = 1; i < n; i++){
        if (a[i] > 0){
            long long score = preffix[i - 1] + suffix[i + 1] - a[i];
            if (score > niceone){
                niceone = score;
                idx = i;
            }
        } 
    }

    if (idx == -1){
        cout << "0\n";
        return;
    }

    vector<int> ans;
    for (int i = idx - 1; i >= 0; i--){
        if (ans.size() & 1)
            a[i] = -a[i];
        if (a[i] > 0)
            ans.push_back(i);
    }
    ans.push_back(idx);

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << " \n"[i == ans.size() - 1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}