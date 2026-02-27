#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin >> T;

    while(T--){
        string s,t;
        cin >> s >> t;

        int j = 0;

        for(int i = 0; i < s.size() && j < t.size(); i++){
            if(s[i] == t[j] || s[i] == '?'){
                s[i] = t[j]; // use match or replace '?'
                j++;
            }
        }

        if(j < t.size()){
            cout << "NO\n";
            continue;
        }

        for(char &c : s)
            if(c == '?') c = 'a';

        cout << "YES\n" << s << '\n';
    }
}