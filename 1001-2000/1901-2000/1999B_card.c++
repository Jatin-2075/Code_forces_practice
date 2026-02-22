#include <bits/stdc++.h>
using namespace std;

int win(int a1,int a2,int b1,int b2){
    int a=0,b=0;
    if(a1>b1) a++; else if(a1<b1) b++;
    if(a2>b2) a++; else if(a2<b2) b++;
    return a>b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, b1, a2, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;
        ans += win(a1,a2,b1,b2);
        ans += win(a2,a1,b1,b2);
        ans += win(a2,a1,b2,b1);
        ans += win(a1,a2,b2,b1);
        cout << ans << "\n";
    }
}