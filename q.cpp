#include<bits/stdc++.h>
using namespace std;

void solve() {
    // always go for the bigger number formation and at the end go for red to change signs if negative 
    int n;
    cin >> n;
    vector<int>  a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int k = 0;
    for (int i = 0; i < n; i++) {
        k = max(k - a[i], b[i] - k);
    }

    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}