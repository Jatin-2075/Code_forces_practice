#include <bits/stdc++.h>
using namespace std;

int main(){
    set <char> st;

    int n;
    cin >> n;

    while(n--){
        char a;
        cin >> a;
        st.insert(tolower(a));
    }
    if(st.size() == 26){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
    }
}