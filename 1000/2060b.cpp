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

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[matrix[i][0]] = i;
    }

    vector<int> positions;
    for (auto& pair : mpp) positions.push_back(pair.second);

    // check these positions
    // (01,11) (02,12)

    int col = 1;
    while (col < m)
    {
        vector<int> v;
        for (int i = 0; i < n; i++) {
            v.push_back(matrix[i][col]);
        }

        int counter = 1;
        while (counter < m) {
            if (v[positions[counter]] < v[positions[counter - 1]]) {
                cout << -1 << endl;
                return;
            }
            counter++;
        }
    }

    for (int i = 0; i < n; i++) cout << positions[i] + 1 << " ";
    cout << endl;
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