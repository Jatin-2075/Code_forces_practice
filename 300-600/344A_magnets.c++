#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string  b = "";

    int grp = 0;
    while(n--){
        string a;
        cin >> a;
        if(a != b) grp++;
        b = a;
    }
    cout << grp;
    return 0;
}