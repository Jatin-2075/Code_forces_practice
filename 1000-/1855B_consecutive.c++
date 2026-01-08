#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        int ans = 0, i = 1;

        while(n % i == 0){
            ans ++;
            i++;
        }
        
        cout << ans << endl;
    }
}