#include <bits/stdc++.h>
using namespace std;

int main() {
    string code;
    string decode;
    
    cin >> code;
    cin >> decode;

    reverse(decode.begin(), decode.end());

    if(code == decode){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
}