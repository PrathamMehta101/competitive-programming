#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    int even = 2, odd = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            v[i] = even;
            even += 2;
        }
        else {
            v[i] = odd;
            odd += 2;
        }
    }

    if (v.back() > n) {
        v[n - 1] = n;
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}