#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    if (n <= 4) {
        cout << 2 << endl;
        return;
    }

    int operations = 2;
    int base = 4;
    int cd = 6;
    int multiple = 1;

    while (base < n) {
        operations++;
        cd = 6 * multiple;
        base += cd;
        multiple *= 2;
    }
    // cout << operations << endl;
    // AP => 2,4,10,22,46,94
    // CD => 2,6,12,24,48
    // OPS => 2,3,4,5,6,7
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}