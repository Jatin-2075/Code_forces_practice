#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int ans;

    if(stoi(n) < 0){
        int s = n.size() ;

        string a = n, b = n;

        a.erase(s - 1 ,1);
        b.erase(s - 2, 1);

        int p = stoi(a);
        int r = stoi(b);

        ans = max(p, r);
    }

    else{
        ans = stoi(n);
    }
    cout << ans;
}