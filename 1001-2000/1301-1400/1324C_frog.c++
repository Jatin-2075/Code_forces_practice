#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int dist = 1, ans = 1;

        for(char c : s){
            if(c == 'L') dist++;
            else{
                ans = max(ans, dist);
                dist = 1;
            }
        }

        ans = max(ans, dist);

        cout << ans << "\n";
    }
}