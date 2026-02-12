#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> even, odd;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }
        vector<int> b;
        for(int x : even) b.push_back(x);
        for(int x : odd) b.push_back(x);

        long long cnt = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(__gcd(b[i], 2 * b[j]) > 1){
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }
}
