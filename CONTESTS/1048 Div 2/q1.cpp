#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // equal
        if (a == b) {
            cout << 0 << endl;
        }
        // multiples 
        else if ((a % b == 0) || (b % a == 0)) { // either one is factor of the other
            cout << 1 << endl;
        }
        // prime nos 
        else {
            cout << 2 << endl;
        }
    }
    return 0;
}