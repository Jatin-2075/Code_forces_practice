#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--){
        int t ;
        cin >> t;
        string s;
        cin >> s;

        int ans = 0, current = 1;
        char state = s[0];

        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i+1])current++;
            else {
                current = 1;
            }
            ans = max(ans, current);
        };
        cout << ans + 1 << endl;
    }
}