#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int coins_spent = 0;

        // exhaust the number of 3 flower pairs until n%2 turns odd
        while ((n - 3) > 0)
        {
            n -= 3;
            coins_spent += 5;
        }


        if (n == 0) {
            coins_spent += 0;
        }
        else if (n == 1) {
            n += 3;
            coins_spent -= 5;
            coins_spent += 8;
        }
        else {
            coins_spent += 4;
        }


        cout << coins_spent << endl;

    }
}
