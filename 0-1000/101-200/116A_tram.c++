#include <bits/stdc++.h>
using namespace std;

int main(){
    int stops;
    cin >> stops;

    int inside = 0, outside = 0;
    int capacity = 0;

    for(int n = 0; n < stops; ++n){
        int on, off;
        cin >> on >> off;
        inside = inside - on + off;
        capacity = max(inside, capacity);
    }
    cout << capacity;
    return 0;
}