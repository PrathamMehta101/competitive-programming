#include<bits/stdc++.h>
using namespace std;

int solve(int x, int y) {
    int xr = 0, yr = 0;
    int steps = 0;

    if (x == y) {
        steps = -1;
    }

    if (x < y) {
        // travel x units in x
        // then travel y units in y
        steps = 2;
    }

    if (x > y) {
        // parts of x -> 1, x-1
        if (1 < y && y < x - 1) steps = 3;
        else steps = -1;
    }
    return steps;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int steps = solve(x, y);
        cout << steps << endl;
    }

    return 0;
}