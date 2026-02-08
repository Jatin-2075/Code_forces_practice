#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string players;
    cin >> players;
    
    int count = 1;
    
    for(int n = 0; n < players.size()-1; ++n){
        
        if(players[n] == players[n+1]){
            count++;
        }
        else if(players[n] != players[n+1]){
            count = 1;
        }
        if(count == 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}