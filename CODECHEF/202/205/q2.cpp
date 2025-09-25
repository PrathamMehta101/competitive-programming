#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int dist = n - k;
        int moves = 0;

        if (dist > (n / 2)) { // get it to lesser side 
            k = n + 1 - k;
            moves += n - k + 1;
        }
        else moves += n - k;

        cout << moves << endl;
    }
    return 0;
}