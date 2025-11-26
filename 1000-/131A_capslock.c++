#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool allUpper = true;
    bool firstLow_restUpper = true;

    for(char c : s){
        if(!(c >= 'A' && c <= 'Z')){
            allUpper = false;
            break;
        }
    }

    if(!(s[0] >= 'a' && s[0] <= 'z')){
        firstLow_restUpper = false;
    } else {
        for(int i = 1; i < s.size(); i++){
            if(!(s[i] >= 'A' && s[i] <= 'Z')){
                firstLow_restUpper = false;
                break;
            }
        }
    }

    if(allUpper || firstLow_restUpper){
        for(char &c : s){
            if(c >= 'A' && c <= 'Z') cout << char(c + 32);
            else cout << char(c - 32);
        }
    }
    else{
        cout << s;
    }
}
