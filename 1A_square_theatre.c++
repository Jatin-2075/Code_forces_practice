#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    cin >> a >> b >> c;

    long long length = (a + c - 1) / c;
    long long width = (b + c - 1) / c;

    cout << length * width ;

    return 0;
}