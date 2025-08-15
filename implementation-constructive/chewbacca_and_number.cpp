#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n; 
    cin >> n;
    string n_string = to_string(n);
    
    for (int i = 0; i < n_string.size(); i++)
    {
        int digit = n_string[i] - '0'; 
        if(i == 0 && (9 - digit == 0)) continue;
        else if (digit < 9 - digit) continue;
        else n_string[i] = char((9 - digit) + '0');
    }
    
    cout << n_string << endl;
    return 0;
}