#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    string ans = "YES";
    int fourtime = 0;
    if(n[0] != '1'){
        ans = "NO";
    }
    if(ans != "NO"){   
        for(int i = 1; i < n.size(); i++){
            if (n[i] != '1' && n[i] != '4') ans = "NO";
            if (n[i] == '4')fourtime++;
            if (n[i] == '1') fourtime = 0;

            if(fourtime >= 3){
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
}