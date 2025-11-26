#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, X;
    cin >> n >> X;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int s = 0;
    int points = 0;
    int loyalty = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        if (floor(s / X) > loyalty) {
            points += a[i];
            loyalty = s / X;
        }
    }

    cout << "POINTS: " << points << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}