#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int bal = 0, steps = 0;
        for(char c : s){
            if(c == '('){
                bal++;
            } else {
                if(bal > 0) bal--;
                else steps++;
            }
        }

        cout << steps << '\n';
    }
}
