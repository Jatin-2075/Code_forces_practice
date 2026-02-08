#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        if(i % 2 == 0){
            cout << string(n, '#');
        }
        else{
            if(i % 4 == 1){
                cout << string(n-1, '.') << '#';
            } 
            else {
                cout << '#' << string(n-1, '.');
            }
        }
        cout << endl;
    }
}
