#include <bits/stdc++.h>
using namespace std;

int main(){
    string text;
    cin >> text;
    
    string hello = "hello";
    int found = 0;

    for(int n = 0; n < text.size(); ++n){
        if(text[n] == hello[found]){
            found++;
        }
        if(found == 5) break;
    }
    if(found == 5){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}