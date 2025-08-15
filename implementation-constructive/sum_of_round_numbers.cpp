#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<string> elements;
        string s = to_string(n);

        // for(int i=s.size()-1; i>=0; i--) {
        //     if(s[i] != '0') {
        //         string elm = string(1, s[i]) + string(i, '0');
        //         elements.push_back(elm);
        //     }
        // } 

        for(int i=0; i<s.size(); i++) {
            if(s[i] != '0') {
                string elm = string(1, s[i]) + string(s.size() - i - 1,'0');
                elements.push_back(elm);
            }
        }

        cout << elements.size() << endl;
        for(int i=0; i<elements.size(); i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    return 0;
}