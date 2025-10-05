#include<bits/stdc++.h>
using namespace std;

void solve(string s, int n) {

    map<char, int> mpp;
    map<int, bool> wonmap;
    for (int i = 0; i < s.length(); i++) {
        mpp[s[i]]++;
        if (s[i] == '2') wonmap[i] = false;
    }

    if (mpp['2'] > 0 && mpp['2'] % 2 == 0) {
        cout << "NO" << endl;
        return;
    }

    vector<vector<char>> matrix(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        char player = s[i];
        for (int j = i; j < n; j++) {

            if (i == j) {
                matrix[i][j] = 'X';
                continue;
            }

            char opp = s[j];

            if (player == '2' && opp == '1') {
                matrix[i][j] = '-';
                matrix[j][i] = '+';
            }
            else if (player == '1' && opp == '2') {
                matrix[i][j] = '+';
                matrix[j][i] = '-';
            }

            if (player == '2' && opp == '2') {
                bool won = wonmap[j];
                if (!won) {
                    matrix[i][j] = '+';
                    matrix[j][i] = '-';
                }
                else {
                    matrix[i][j] = '-';
                    matrix[j][i] = '+';
                    wonmap[i] = true;
                }
            }

            if (player == '1' && opp == '1') {
                matrix[i][j] = '=';
                matrix[j][i] = '=';
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        solve(s, n);
    }

    return 0;
}