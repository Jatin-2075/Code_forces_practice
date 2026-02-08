#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char d;
    cin >> d;
    string s, f = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans = "";
    int n = 0;
    cin >> s;
    if(d == 'R'){
        while(n < s.size()){
            int r = f.find(s[n]);
            ans.push_back(f[r-1]);
            n++;
        }
    }
    else{
        while(n < s.size()){
            int r = f.find(s[n]);
            ans.push_back(f[r+1]);
            n++;
        }
    }
    cout << ans;
}