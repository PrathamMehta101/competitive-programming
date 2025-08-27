#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int distinct_chars = 0;
    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    if (mpp.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

}