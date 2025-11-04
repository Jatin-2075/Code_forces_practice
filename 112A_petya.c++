#include <bits/stdc++.h>
using namespace std;

int main() {
    string first ;
    string second ;
    cin >> first >> second;

    for(int n = 0; n < first.size(); ++n){
        char A = tolower(first[n]);
        int an = (int)A;

        char B = tolower(second[n]);
        int bn = (int)B;

        if(an > bn){
            cout << 1;
            return 0;
        }
        else if(an < bn){
            cout << -1;
            return 0;
        }
        else if(an == bn) continue;
    }
    cout << 0;
    return 0;
}