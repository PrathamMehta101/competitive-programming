#include<bits/stdc++.h>
#define ll long long
#include<cmath>
using namespace std;

void solve() {
    ll n;
    cin >> n;

    ll x, maxWatermelons, deals, price, total_price = 0;

    while (n > 0) {
        x = log(n) / log(3);
        if ((ll)pow(3, x + 1) == n) x = x + 1; // pow returns double 
        maxWatermelons = pow(3, x);
        deals = n / maxWatermelons;
        price = pow(3, x + 1) + x * pow(3, x - 1);
        total_price += deals * price;
        n = n % maxWatermelons;
        //x-- -> STUPID, ONLY CHANGE N AS THAT IS WHAT IS REQUIRED TO STOP THIS LOOP
    }

    cout << total_price << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}