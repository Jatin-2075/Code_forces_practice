#include <bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    getline(cin, s);

    set <char> idk;

    for(char i : s){
        if(i >= 'a' && i <= 'z'){
            idk.insert(i);
        }
    }

    cout << idk.size();
    return 0;
}