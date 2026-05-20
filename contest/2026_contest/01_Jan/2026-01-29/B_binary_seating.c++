#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin>>t))return 0;
    while(t--){
        int n;string s;
        cin >> n >> s;
        int c1 = count(s.begin(), s.end(), '1');
        if(c1==0){cout << (n+2)/3 << "\n"; continue;}
        long long add = 0;
        int first = s.find('1'), last = s.rfind('1');
        add += (first+1)/3;
        for(int i =first; i<last;){
            int j = i + 1, z=0;
            while(j<=last && s[j] == '0'){ ++z; ++j; }
            add += z/3;
            i=j;
        }
        add += (n-1-last+1)/3;
        cout << c1 + add << "\n";
    }
}