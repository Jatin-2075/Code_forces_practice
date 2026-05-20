#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;
        if(a <= 3){
            cout << a << endl;
        }
        else if(a % 2 == 0) cout << 0 << endl;
        else cout << 1 << endl; 
    }
    return 0;
}