#include<iostream>
using namespace std;

string res;

void help_xenia(string s) {
    if(s.size() == 1) {
        res = to_string(s[0]);
        return;
    }

    vector<int> v;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '+') {
            v.push(stoi(s[i-1]));
        } 
    }
    v.push(stoi(s[s.size()-1]));

    sort(v);

    for(int i=0; i<v.size(); i++) {
        res += v[i] + '+';
    }
}

int main() {
    string s;
    cin >> s;
    help_xenia(s);
    cout << res;

}