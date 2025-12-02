#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ways = 0;
        //R1 - a1-b1, a2-b2
        if (a1 > b1 && a2 >= b2 || a2 > b2 && a1 >= b1) ways++;
        //R2 - a1-b2
        if (a1 > b2 && a2 >= b1 || a2 > b1 && a1 >= b2) ways++;
        //R3 - a2-b1
        if (a2 > b1 && a1 >= b2 || a1 > b2 && a2 >= b1) ways++;
        //R4 - a2-b2
        if (a2 > b2 && a1 >= b1 || a1 > b1 && a2 >= b2) ways++;

        cout << ways << endl;
    }
    return 0;
}