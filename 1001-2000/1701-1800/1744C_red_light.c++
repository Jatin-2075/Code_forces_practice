#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        s += s;

        int nextG = -1;
        vector<int> dist(2*n, 0);

        for(int i = 2*n - 1; i >= 0; i--){
            if(s[i] == 'g'){
                nextG = i;
            }

            if(nextG != -1)
                dist[i] = nextG - i;
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == c){
                ans = max(ans, dist[i]);
            }
        }

        cout << ans << endl;
    }
}
