#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int i;
        cin >> i;
        int ans = 0, count = 0;
        for(int n = 0; n < i; n++){
            int a;
            cin >> a;
            if(a == 1){
                ans = max(ans, count);
                count = 0;
            }
            if(a == 0){
                count++;
                ans = max(ans, count);
            }
        }
        cout << ans << endl;
    }
}