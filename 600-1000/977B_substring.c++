#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;
    for(int i = 0; i < n-1; i++){
        string a = s.substr(i, 2);
        mp[a]++;
    }

    string ans = "";
    int m = 0;
    for(auto i : mp){
        if(i.second > m){
            ans = i.first;
            m = i.second;
        }
    }
    cout << ans;
}