#include <bits/stdc++.h>
using namespace std;
int main () {
    int length ;
    cin >> length;

    string stones;
    cin >> stones;

    int removed = 0;
    for(int n = 0; n < stones.size() - 1; n++){
        if(stones[n] == stones[n+1]){
            removed++;
        }
    }
    cout << removed ;
}