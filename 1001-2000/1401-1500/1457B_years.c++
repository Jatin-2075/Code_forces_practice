#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <string> ans;

    while(n--){
        int a;
        cin >> a;

        if(a >= 2020 && a % 2020 <= a / 2020){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        cout << i << endl;
    }
}