#include <bits/stdc++.h>
using namespace std;

int calc(string s, string t){
    int n = s.size();
    int j = n - 1;
    while(j >= 0 && s[j] != t[1]) j--;
    if(j < 0) return 1e9;

    int i = j - 1;
    while(i >= 0 && s[i] != t[0]) i--;
    if(i < 0) return 1e9;

    return (j - i - 1) + (n - j - 1);
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int ans = min({
            calc(s, "00"),
            calc(s, "25"),
            calc(s, "50"),
            calc(s, "75")
        });

        cout << ans << "\n";
    }
}
