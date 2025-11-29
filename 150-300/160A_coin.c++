#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;

    vector <int> coins;
    int total = 0;;

    for(int n = 0; n < c; ++n){
        int coin;
        cin >> coin;
        total += coin;
        coins.push_back(coin);
    }

    int taken = 0;
    int count = 0;

    sort(coins.rbegin(), coins.rend());

    for(int n = 0; n < c; n++){
        taken += coins[n];
        count++;
        if(taken > total - taken){
            cout << count;
            return 0;
        }
    }
}