#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<char> acst;

        for(char c : s){
            if(!acst.empty() && acst.back() == c)
                acst.pop_back(); 
            else
                acst.push_back(c);
        }

        if(acst.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}