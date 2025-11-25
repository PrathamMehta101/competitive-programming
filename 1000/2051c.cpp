#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<int> q(k);
    for (int i = 0; i < k; i++) cin >> q[i];

    if (k >= n) {
        // knows all questions
        cout << string(m, '1') << endl;
        return;
    }

    if (k < n - 1) {
        // always 1 question he will not know
        cout << string(m, '0') << endl;
        return;
    }

    vector<bool> prepared(n, false);
    for (int i = 0; i < k; i++) {
        prepared[q[i] - 1] = true;
    }


    string str;
    // only k=n-1 left (1 question he didnt prepare for)
    for (int i = 0; i < m; i++) {
        if (!prepared[a[i] - 1]) { //(that one question doesnt come)
            str += '1';
        }
        else {
            str += '0';
        }
    }

    cout << str << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}