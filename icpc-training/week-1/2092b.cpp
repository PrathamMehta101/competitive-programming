#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;


    int cnt1 = 0, cnt2 = 0;

    // cnt1 -> a0,b1,a2,b3...
    // cnt2 -> b0,a1,b2,a3,b4,...
    for (int i = 0; i < n; i++) {
        if (i & 1) {
            // i is odd
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        }
        else {
            // i is even
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }


    cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "Yes" : "No") << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}