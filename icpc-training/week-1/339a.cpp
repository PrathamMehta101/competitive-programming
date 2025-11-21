#include<bits/stdc++.h>
using namespace std;

// string res;

// void help_xenia(string s) {
//     if(s.size() == 1) {
//         res = to_string(s[0]);
//         return;
//     }

//     vector<int> v;

//     for(int i=0; i<s.size(); i++) {
//         if(s[i] == '+') {
//             v.push(stoi(s[i-1]));
//         } 
//     }
//     v.push(stoi(s[s.size()-1]));

//     sort(v);

//     for(int i=0; i<v.size(); i++) {
//         res += v[i] + '+';
//     }
// }

int main() {
    string s;
    cin >> s;

    // take all numbers from s
        // all odd indices will be +
    vector<int> numbers;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) numbers.push_back(s[i] - '0'); // trick to convert to integer
    }

    // sort them
    sort(numbers.begin(), numbers.end());

    // print them separated by +
    string res = "";
    for (int i = 0; i < numbers.size(); i++)
    {
        res += to_string(numbers[i]);
        if (s.size() == 1 || i == numbers.size() - 1) break; // only 1 number or at last number
        else {
            res += "+";
        }
    }

    cout << res << endl;

}