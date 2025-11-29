#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int max_pos = 0, min_pos = n-1;

    for(int i = 0; i < n; i++) {
        if(a[i] > a[max_pos]) max_pos = i;
        if(a[i] <= a[min_pos]) min_pos = i;
    }

    int steps = max_pos + (n - 1 - min_pos);
    if(max_pos > min_pos) steps--;

    cout << steps;
}
