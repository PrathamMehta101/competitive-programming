#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;


    int operations = 2 * (n - 2) + 1;
    cout << operations << endl;

    cout << 1 << " " << 1 << " " << n << endl;


    int remainingElements = 1;
    for (int i = 2; i <= n; i += 2) {
        if (remainingElements <= 1) {
            //ith row
            cout << i << " " << 1 << " " << n - remainingElements << " " << endl;
            //i+1th row
            cout << i + 1 << " " << 1 + remainingElements << " " << n << endl;
            remainingElements++;
        }
        else {
            // ith row 
            cout << i << " " << 1 << " " << n - remainingElements << " " << endl;
            // remaining ith row
            cout << i << " " << n - remainingElements + 1 << " " << n << endl;

            if (i + 1 <= n) {
                // i+1th row
                cout << i + 1 << " " << 1 << " " << remainingElements << endl;
                // remaining i+1th row
                cout << i + 1 << " " << remainingElements + 1 << " " << n << endl;
                remainingElements++;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}