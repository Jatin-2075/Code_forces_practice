#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    for(char it : a){
        if(it == 'H' || it == 'Q' || it == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}