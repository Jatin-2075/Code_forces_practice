#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> shoes;

    for(int n = 0; n < 4; n++){
        int a;
        cin >> a;
        shoes.insert(a);
    }
    cout << 4 - shoes.size();
    return 0;
}