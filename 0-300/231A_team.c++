#include <bits/stdc++.h>
using namespace std;

int main() {
    int no ;
    cin >> no;

    int count = 0;
    while(no--){
        int a,b,c;
        cin >> a >> b >> c ;

        if(a + b + c >=2 ){
            count++;
        }
    }

    cout << count;
}