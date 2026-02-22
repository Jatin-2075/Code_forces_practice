#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    string s;
    cin >> s;

    int totalL = 0, totalO = 0;
    int myl = 0, myo = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L')totalL++;
        if(s[i] == 'O')totalO++;
    }

    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == 'L')myl++;
        if(s[i] == 'O')myo++;

        int frl = totalL - myl;
        int fro = totalO - myo;

        if(frl != myl && fro != myo){
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
}