#include<bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid;
    for (int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        grid.push_back(s);
    }


    for (int i = 0; i < 8; i++) {
        bool rp = true;
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] != 'R') {
                rp = false;
                break;
            }
        }

        if (rp) {
            cout << 'R' << endl;
            return;
        }
    }

    cout << 'B' << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}