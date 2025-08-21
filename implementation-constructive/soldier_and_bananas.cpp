#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, w, n;
    cin >> k >> n >> w;

    // k - cost of one banana
    // n - money he has
    // w - bananas he wants

    int totalMoneyRequired = (((w * (w + 1)) / 2) * k);
    int moneyBorrowed;

    if (n - totalMoneyRequired < 0) // debt condition 
        moneyBorrowed = abs(n - totalMoneyRequired);
    else
        moneyBorrowed = 0;

    cout << moneyBorrowed << endl;

    return 0;
}

// k=1, n=2, w=1