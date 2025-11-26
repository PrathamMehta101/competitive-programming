#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sort(matrix[i].begin(), matrix[i].end());
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (abs(matrix[i][j - 1] - matrix[i][j]) != n) {
                cout << -1 << endl;
                return;
            }
        }
    }

    vector<int> order;
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[matrix[i][0]] = i;
    }

    for (auto& pair : mpp) order.push_back(pair.second);
    for (int i = 0; i < n; i++) cout << order[i] + 1 <<
        " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}