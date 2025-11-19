#include<bits/stdc++.h>
using namespace std;

void solve() {
    double n;
    cin >> n;
    double px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    vector<double> a(n);
    for (double i = 0; i < n; i++) cin >> a[i];
    double dist = sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));

    double sum = dist;
    double longest = dist;

    for (double i = 0; i < n; i++) {
        sum += a[i];
        longest = max(a[i], longest);
    }

    // polygon can be formed
    if (sum - longest < longest) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}