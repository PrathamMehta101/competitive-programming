#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    auto it1 = v.begin();
    auto it2 = next(it1);

    while (it2 < v.end())
    {
      if (abs(*it2 - *it1) <= 1) {
        if (*it2 > *it1) {
          // remove it1 
          it1 = v.erase(it1);
          it2++;
        }
        else {
          it2 = v.erase(it2);
        }
      }
      else {
        // checking for another element satisfying the condition
        it2++;
      }
    }


    if (v.size() == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}