#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int count = 0;
        while (n--)
        {
            int dx, dy, xi, yi;
            cin >> dx >> dy >> xi >> yi;
            // only the balls along the 2 diagonals will move go to the hole, and even if there is  interception between balls, the balls will just swap direction.
            if (xi == yi && (dy / dx == 1)) {
                count++;
            }
            else if (xi + yi == s && (dy / dx == -1)) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}