#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> ts;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        vector<int> v;
        for (int j = 0; j < l; j++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        ts.push_back(v);
    }

    // all sets should have values from 1-m 
    vector<int> v(m, -1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ts[i].size(); j++) {
            v[ts[i][j] - 1]++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == -1) {
            cout << "NO\n";
            return;
        }
    }

    int cs = 0, k = 0;
    vector<bool> updated(n, false);
    vector<int> score(m, -1);

    for (int i = 0; i < ts.size(); i++) {
        for (int j = 0; j < ts[i].size(); j++) {
            if (score[ts[i][j] - 1] == -1) {
                score[ts[i][j] - 1]++;
                updated[i] = true;
            }
        }

        for (int k = 0; k < m; k++) {
            if (score[i] == -1) break;
        }

        if (k == m) {
            for (int l = 0; l < n; l++) {
                if (updated[l] == true) cs++;
            }
        }
    }
    cout << cs << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}