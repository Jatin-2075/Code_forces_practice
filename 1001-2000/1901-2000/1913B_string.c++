#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;

        int z=0,o=0;
        for(char c:s){
            if(c=='0') z++;
            else o++;
        }

        int n = s.size();
        int i = 0;

        for(i=0;i<n;i++){
            if(s[i]=='0'){
                if(o>0) o--;
                else break;
            }
            else{
                if(z>0) z--;
                else break;
            }
        }

        cout << n - i << "\n";
    }
}
