#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int> last(26, -1);
        long long ans = 0;

        for(int i=0;i<n;i++){
            ans += i - last[s[i]-'a'];
            last[s[i]-'a'] = i;
        }

        cout << ans << "\n";
    }
}
