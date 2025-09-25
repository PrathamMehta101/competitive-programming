#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        // Split p into individual chars (kinda pointless since string is already iterable)
        vector<char> p_parts(p.begin(), p.end());

        // Split s into consecutive character runs
        vector<string> s_parts;
        string str = "";
        for (int i = 0; i < s.length(); i++) {
            if (str.empty() || s[i] == str.back()) {
                str += s[i]; // continue current segment
            }
            else {
                s_parts.push_back(str); // push finished segment
                str = string(1, s[i]);  // start new one
            }
        }
        if (!str.empty()) s_parts.push_back(str);

        cout << "S PARTS: ";
        for (auto& part : s_parts) cout << part << " ";
        cout << "\n";
    }
    return 0;
}
