#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> home , team;
    int ans = 0;

    while(n--){
        int a, b;
        cin >> a >> b;
        home.push_back(a);
        team.push_back(b);
    }

    for(int n = 0; n < home.size(); n++){
        for(int j = 0; j < team.size(); j++){
            if(home[n] == team[j]) ans++;
        }
    }
    cout << ans;
}