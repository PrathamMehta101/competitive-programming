#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = { 10, 15, 12 };
    vector<int> prefix(v.size());
    prefix[0] = v[0];
    for (int i = 1; i < v.size(); i++) prefix[i] = prefix[i - 1] + v[i];

    for (int i = 0; i < v.size(); i++) cout << prefix[i] << " ";
    int target = 23;
    // find the smallest element >= target


    cout << prefix[ans] << endl;

    return 0;
}