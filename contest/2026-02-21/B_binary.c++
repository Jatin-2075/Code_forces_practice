#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> onevector, zerovector;

        for(int i = 0; i < n; i++){
            if(s[i] == '1') onevector.push_back(i+1);
            else zerovector.push_back(i+1);
        }

        int ones = onevector.size();
        int zeros = zerovector.size();

        if(ones % 2 == 0){
            cout << ones << "\n";
            for(int i = 0; i < ones; i++) cout << onevector[i] << (i == ones - 1 ? "" : " ");
        }
        else if(zeros % 2 == 1){
            cout << zeros << "\n";
            for(int i = 0; i < zeros; i++) cout << zerovector[i] << (i == zeros - 1 ? "" : " ");
        }
        else {
            cout << -1;
        }

        cout << "\n";
    }
}