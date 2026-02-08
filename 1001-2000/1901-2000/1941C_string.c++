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

        int remove = 0;
        int y = 0;

        while(y + 2 < s.size()){
            if((s[y] == 'm' && s[y+1] == 'a' && s[y+2] == 'p') ||
               (s[y] == 'p' && s[y+1] == 'i' && s[y+2] == 'e')){
                remove++;
                y += 3;
            } else {
                y++;
            }
        }

        cout << remove << "\n";
    }
}
