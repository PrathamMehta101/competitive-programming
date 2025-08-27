#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool hashEnd = true;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else {
            if (hashEnd) {
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                hashEnd = false;
            }
            else {
                cout << "#";
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout << endl;
                hashEnd = true;
            }
        }
    }

    return 0;
}