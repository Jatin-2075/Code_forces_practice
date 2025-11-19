#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rooms = 0;

    while(n--){
        int a, b;
        cin >> a >> b;
        if(a <= b-2) rooms++;
    }
    cout << rooms;
}