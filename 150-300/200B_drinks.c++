#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double add = 0;

    double a = 0;
    while(a < n){
        int t;
        cin >> t;
        add += t;
        a++;
    }
    cout << fixed << setprecision(12) << (add / n);
    return 0;
}