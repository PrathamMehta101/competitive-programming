#include<bits/stdc++.h>
using namespace std;

int steps = 0;

bool exceeding(int x, int n) {
    if (x > n) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        int x = 1;

        while (x != n)
        {
            steps++;
        }


        cout << steps << endl;
    }

    return 0;
}