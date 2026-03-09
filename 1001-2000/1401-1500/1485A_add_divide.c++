#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;

        long long ans = 1e18;

        for(int i=0;i<=30;i++){
            long long nb = b + i;
            if(nb == 1) continue;

            long long temp = a;
            long long ops = i;

            while(temp){
                temp /= nb;
                ops++;
            }

            ans = min(ans, ops);
        }

        cout << ans << "\n";
    }
}