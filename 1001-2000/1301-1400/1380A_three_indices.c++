#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin >> p[i];

        vector<int> left(n), right(n);

        left[0] = 0;
        for(int i=1;i<n;i++) {
            if(p[i-1] < p[left[i-1]])
                left[i] = i-1;
            else
                left[i] = left[i-1];
        }

        right[n-1] = n-1;
        for(int i=n-2;i>=0;i--) {
            if(p[i+1] < p[right[i+1]])
                right[i] = i+1;
            else
                right[i] = right[i+1];
        }

        bool ok = false;

        for(int j=1;j<n-1;j++) {
            if(p[left[j]] < p[j] && p[right[j]] < p[j]) {
                cout << "YES\n";
                cout << left[j]+1 << " " << j+1 << " " << right[j]+1 << "\n";
                ok = true;
                break;
            }
        }

        if(!ok) cout << "NO\n";
    }
}
