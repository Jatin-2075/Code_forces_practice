#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<double, double>> tasks(n);
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].first >> tasks[i].second;
    }

    double max_points = 0.0; 
    
    for (int i = n - 1; i >= 0; i--) {
        double c = tasks[i].first;
        double p = tasks[i].second;
        
        double do_task = c + (1.0 - p / 100.0) * max_points;
        
        double skip_task = max_points;
        
        max_points = max(do_task, skip_task);
    }

    cout << fixed << setprecision(10) << max_points << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}