#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n) {
    int divisors = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) divisors++;
    }

    if (divisors == 2) return true;
    else return false;

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (check_prime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}