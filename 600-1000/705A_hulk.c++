#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";

    for(int i = 0; i < n; i++ ){

        if( i % 2 != 0){
            ans += "I love ";
        }
        else{
            ans += "I hate ";
        }
        
        if( i == n - 1 ){
            ans += "it";
        }
        else{
            ans += "that";
        }
        ans += " ";
    }
    cout << ans;
    return 0;
}