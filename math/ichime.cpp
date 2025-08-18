#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // 3 numbers such that the sum of 2 > other one
        int ab = (a + b) / 2;
        int bc = (b + c) / 2;
        int cd = (c + d) / 2;

        while (true)
        {
            if ((ab + bc > cd) && (bc + cd > ab) && (cd + ab > bc))
            {
                cout << ab << bc << cd << endl;
                break;
            }
            else
            {
                if (ab + bc < cd)
                {
                    if (bc + 1 <= c)
                        bc++;
                    if (ab + 1 <= a)
                        ab++;
                }
                else if (bc + cd < ab)
                {
                    if (bc + 1 <= c)
                        bc++;
                    if (cd + 1 <= d)
                        cd++;
                }
                else
                {
                    if (cd + 1 <= d)
                        cd++;
                    if (ab + 1 <= b)
                        ab++;
                }
            }
        }
    }

    return 0;
}