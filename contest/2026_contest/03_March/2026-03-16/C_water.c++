#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll lcm_ll(ll a, ll b){
    return (a / __gcd(a,b)) * b;
}

void solve(){
    ll a,b,c,m;
    cin >> a >> b >> c >> m;

    ll A = m / a;
    ll B = m / b;
    ll C = m / c;

    ll ab = m / lcm_ll(a,b);
    ll ac = m / lcm_ll(a,c);
    ll bc = m / lcm_ll(b,c);

    ll abc = m / lcm_ll(a, lcm_ll(b,c));

    ab -= abc;
    ac -= abc;
    bc -= abc;

    ll onlyA = A - ab - ac - abc;
    ll onlyB = B - ab - bc - abc;
    ll onlyC = C - ac - bc - abc;

    ll Alice = onlyA*6 + ab*3 + ac*3 + abc*2;
    ll Bob   = onlyB*6 + ab*3 + bc*3 + abc*2;
    ll Carol = onlyC*6 + ac*3 + bc*3 + abc*2;

    cout << Alice << " " << Bob << " " << Carol << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}