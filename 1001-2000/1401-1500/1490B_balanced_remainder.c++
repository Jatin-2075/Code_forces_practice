#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> c(3,0);

        for(int i=0;i<n;i++){
            int x; 
            cin >> x;
            c[x%3]++;
        }

        int target = n/3;
        int moves = 0;

        for(int step=0; step<6; step++){
            for(int i=0;i<3;i++){
                if(c[i] > target){
                    int extra = c[i] - target;
                    c[i] -= extra;
                    c[(i+1)%3] += extra;
                    moves += extra;
                }
            }
        }

        cout << moves << '\n';
    }
}