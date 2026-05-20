#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> ans;

    while(n--){
        string a;
        cin >> a;
        int chars = 0;

        for(char i : a){
            if(i == 'Y')chars++;
        }

        if(chars >= 2){
            ans.push_back("NO");
        }
        else{
            ans.push_back("YES");
        }
    }
    for(auto i : ans)cout << i << endl;
}