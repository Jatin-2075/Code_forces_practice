#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;

    vector<string> ans;
    while(t--){
        long long n, k, x;

        cin >> n >> k >> x;

        long long max = k * n - k * (k - 1) / 2;
        long long min = k * ( k + 1 ) / 2;

        if(max < x || min > x){
            ans.push_back("NO");
        }
        else ans.push_back("YES");
        
    }

    for(auto i : ans)cout << i << endl;
}