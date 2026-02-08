#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ans = min(m,n);

    if(ans % 2 != 0) cout << "Akshat";
    else cout << "Malvika";
}