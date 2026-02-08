#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1) c1++;
        else if(x == 2) c2++;
        else if(x == 3) c3++;
        else c4++;
    }

    int taxi = 0;

    taxi += c4;

    taxi += c3;
    c1 = max(0, c1 - c3);

    taxi += c2 / 2;

    if(c2 % 2 == 1){
        taxi += 1;
        c1 = max(0, c1 - 2);
    }

    if(c1 > 0){
        taxi += (c1 + 3) / 4;
    }

    cout << taxi;
    return 0;
}
