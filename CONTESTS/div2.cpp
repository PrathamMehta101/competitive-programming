#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    if (b * n <= a) cout << 1 << endl; // tab length will always be b so cursor stays the same 
    else cout << 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}