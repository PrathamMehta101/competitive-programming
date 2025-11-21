#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    int rem = n / 2;
    count++;
    count += rem / 2;
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}