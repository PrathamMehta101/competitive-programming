#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // special case
    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int mx = 0, d = 0, zero, one, start;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one = i;
            break;
        }
    }

    zero = (one + 1) % n;;

    start = one;

    while (zero != start) {
        if (s[zero] == '1') {
            mx = max(d, mx);
            d = 0;
        }
        if (s[zero] == '0') d++;
        zero = (zero + 1) % n;
    }

    mx = max(d, mx);

    cout << mx << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}