#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> stones(n);
    vector<pair<int, int>> missions(m);
    for (int i = 0; i < n; i++) cin >> stones[i];
    for (auto& pair : missions) {
        cin >> pair.first >> pair.second;
    }

    vector<int> prefix(n);
    prefix[0] = stones[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] ^ stones[i];
    }

    for (auto& pair : missions) {
        int l = pair.first, r = pair.second;
        int res;

        if (l == 1) res = prefix[r - 1];
        else res = prefix[r - 1] ^ prefix[l - 2];

        cout << res << endl;
    }
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