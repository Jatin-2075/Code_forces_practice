#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int countzero = 0, countone = 0;
        for(auto i : s){
            if(i == '0'){
                countzero++;
            }
            else {
                countone++;
            }
        }
        int count = min(countzero, countone);
        if(count % 2 == 0){
            cout << "NET" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }
}