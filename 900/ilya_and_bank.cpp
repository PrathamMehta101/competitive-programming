#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n > 0) cout << n;
    else {
        string s = to_string(n);
        string lastDigitDeleted =  s.substr(0, s.size()-1);
        string secondLastDigitDeleted = s.substr(0, s.size()-2) + s[s.size()-1];

        if(stoi(lastDigitDeleted) > stoi(secondLastDigitDeleted)) cout << stoi(lastDigitDeleted) << endl;
        else cout << stoi(secondLastDigitDeleted) << endl;
    }

    return 0;
}