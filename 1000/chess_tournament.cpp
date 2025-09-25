#include<bits/stdc++.h>
using namespace std;

void solve(int n, string s) {
    cout << "IN SOLVE" << endl;
    vector<pair<int, int>> v; // element, index

    vector<vector<char>> matrix;

    map<int, int> mpp;

    // idx_of_2, win_counter=0
    map<int, int> mpp2;

    for (int i = 0; i < s.size(); i++) {
        v.push_back({ i, s[i] });
        mpp[s[i] - '0']++;
        if (s[i] - '0' == 2) {
            mpp2[i] = 0;
        }
    }

    // number of 1s and 2s is the same
    if (mpp[1] == mpp[2]) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            if (i == j) matrix[i][j] = 'X';

            if (v[i].second == 1 && v[j].second == 1) matrix[i][j] = '=';

            if (v[i].second == 1 && v[j].second == 2) matrix[i][j] = '+';

            if (v[i].second == 2 && v[j].second == 1) matrix[i][j] = '-';

            if (v[i].second == 2 && v[j].second == 2) matrix[i][j] = '#';
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    // 1-1 => draw
    // 1-2 => 1-win, 2-lose
    // 2-2 => make one win and other lose, then next time make the other win
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        solve(n, s);

    }
    return 0;
}