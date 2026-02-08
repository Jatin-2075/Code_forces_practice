#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , untreated = 0, police = 0;
    cin >> n;

    while(n--){
        int a;
        cin >> a;

        if(a >= 1) police += a;
        else{
            if(police >= 1){
                police--;
            }
            else{
                untreated++;
            }
        }
    }
    cout << untreated;
    return 0;
}