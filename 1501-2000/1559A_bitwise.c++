#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = -1;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(i == 0) ans = a;
            else ans &= a;
        }
        cout << ans << "\n";
    }
}