#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // check if either team scores more than 3 consecutive goals 

        // (greater goals)/2 > smaller goals, it is conformed that 3 consecutive goals were made 

        // total goals = greaterGoals/2
        // number of smaller goals > greaterGoals/2 - 1 


        double firstGreater = max(a, b);
        double firstSmaller = min(a, b);

        c = c - a;
        d = d - b;

        double secondGreater = max(c, d);
        double secondSmaller = min(c, d);


        // cout << "firstSmaller" << firstSmaller << endl;
        // cout << "firstGreater" << firstGreater << endl;
        // cout << "secondSmaller" << secondSmaller << endl;
        // cout << "secondGreater" << secondGreater << endl;

        double firstSlots = ceil(static_cast<float>(firstGreater / 2)) - 1;
        double secondSlots = ceil(static_cast<float>(secondGreater / 2)) - 1;


        // cout << "firstSlots" << firstSlots << endl;
        // cout << "secondSlots" << secondSlots << endl;


        if ((firstSmaller >= firstSlots) && (secondSmaller >= secondSlots)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }



    }

    return 0;
}