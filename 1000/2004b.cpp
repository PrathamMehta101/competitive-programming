#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    int L, R;
    cin >> L >> R;
    int common = min(r, R) - max(l, L);
    if (common < 0) {
        cout << 1 << endl; // block 1 door between alice and bob
        return;
    }
    common += l != L; // block 1 starting door
    common += r != R; // block 1 ending door
    cout << common << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}