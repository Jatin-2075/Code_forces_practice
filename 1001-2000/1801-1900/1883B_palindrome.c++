#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <string> ans;

    while(n--){

        int n, k, odd = 0;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> data(26,0);
        for(auto i : s)data[i - 'a']++;

        for(int i : data){
            if(i % 2 != 0)odd++;
        }

        int remaining = n - k;
        int allowed = (remaining % 2 == 0 ? 0 : 1);

        if(odd - k <= allowed)ans.push_back("YES");
        else ans.push_back("NO");

        
    }

    for(auto i : ans) cout << i << endl;
}