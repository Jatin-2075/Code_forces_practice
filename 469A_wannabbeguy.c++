#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool checker = false;
    set <int> st;

    int b;
    cin >> b;

    while(b--){
        int i;
        cin >> i;
        st.insert(i);
        if(i == n){
            checker = true;
        }
    }

    int a;
    cin >> a;
    
    while(a--){
        int i;
        cin >> i;
        st.insert(i);
        if(i == n){
            checker = true;
        }
    }
    if(st.size() == n && checker){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
}