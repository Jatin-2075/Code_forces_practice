#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map <string, int> mp;
    vector <string> ans;

    while(n--){
        string a;
        cin >> a;

        if(mp[a] == 0){
            ans.push_back("OK");
            mp[a]++;
        }
        else{
            ans.push_back(a + to_string(mp[a]));
            mp[a]++;
        }
    }

    for(auto i : ans){
        cout << i << endl;
    }
}