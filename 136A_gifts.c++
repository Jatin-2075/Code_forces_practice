#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> list(n+1);
    vector <int> ans(n+1);

    for(int i = 1; i <= n; i++){
        cin >> list[i];
    }

    for(int i = 1; i <= n; ++i){
        ans[list[i]] = i;
    }
    for(int i = 1; i <= n; ++i){
        cout << ans[i] << " ";
    }

}