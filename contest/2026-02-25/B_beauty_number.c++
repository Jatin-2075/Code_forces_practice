#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string x;
        cin >> x;

        int S = 0;
        vector<int> reduce;

        for(int i = 0; i < x.size(); i++){
            int d = x[i] - '0';
            S += d;

            if(i == 0) reduce.push_back(d - 1);
            else reduce.push_back(d); 
        }

        int ans = 18;

        for(int T = 1; T <= 9; T++){
            if(S <= 9){
                ans = 0;
                break;
            }

            int need = S - T;
            if(need < 0) continue;

            vector<int> temp = reduce;
            sort(temp.rbegin(), temp.rend());

            int got = 0, moves = 0;
            for(int r : temp){
                got += r;
                moves++;
                if(got >= need){
                    ans = min(ans, moves);
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
}