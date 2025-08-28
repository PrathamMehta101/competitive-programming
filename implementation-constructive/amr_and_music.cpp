#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;
    vector<int> instruments;

    int days = 0;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        v.push_back({ b,i });
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        days += v[i].first;
        if (days <= k) instruments.push_back(v[i].second);
    }

    cout << instruments.size() << endl;

    for (int i = 0; i < instruments.size(); i++)
    {
        cout << instruments[i] + 1 << " ";
    }
}