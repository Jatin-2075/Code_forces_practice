#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int left = 240 - k;
    int used = 0;
    int ans = 0;

    for(int i = 1; i <= n; i++){
        used += 5 * i;
        if(used > left) break;
        ans++;
    }

    cout << ans;
}
