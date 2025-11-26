#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;

    if (x > 1 && k > 1) {
        cout << "NO" << endl;
        return;
    }

    if (k == 1) {
        if (isPrime(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }

    if (x == 1) { // 11 is the only prime that can be formed (for k <= 7)
        if (k == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}