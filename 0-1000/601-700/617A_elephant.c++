#include <bits/stdc++.h>
using namespace std;

int main() {
    int dist ;
    cin >> dist;

    if(dist < 5){
        cout << 1;
        return 0;
    }
    
    int steps = ( dist + 4 ) / 5;
    cout << steps;
    return 0;
}