#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    map <char, int> check, ans;

    int n = a.size() + b.size() ;

    if(n != c.size()){
        cout << "NO";
        return 0;
    }
    for(char v : a)check[v]++;
    for(char v : b)check[v]++;

    for(int i = 0; i < c.size(); i++){
        ans[c[i]]++;
    }
    
    for(char i = 'A'; i <= 'Z'; i++){
        if(check[i] != ans[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}