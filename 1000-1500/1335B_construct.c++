#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector <char> alaphabets = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        string ans = "";

        for(int i = 0; i < n; i++){
            if(b > i){
                ans += alaphabets[i];
            }
            if(b <= i){
                int idk = i - b;
                ans += ans[idk];
            }
        }
        cout << ans << endl;
    }
}