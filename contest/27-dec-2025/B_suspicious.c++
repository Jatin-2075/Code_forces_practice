#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ans;

    while(n--){
        string s;
        cin >> s;

        int i = 0, operations = 0;

        while(i < s.size()){
            if(s[i] == 'U'){
                if(s[i+1] != 's'){
                    operations++;
                    s[i+1] = 's';
                }
                if(i != 0 && s[i-1] != 's'){
                    operations++;
                    s[i-1] = 's';
                }
            }
            i++;
        }
        ans.push_back(operations);
    }
    for(auto i : ans)cout << i << endl;
}