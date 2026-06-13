#include <iostream>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s;
    cin >> t;

    int n1 = s.length();
    int n2 = t.length();

    int f = 0;

    if (n1 != n2)
    {
        cout << "NO";
        return 0;
    }

    else
    {
        for (int i = 0; i < n1; i++)
        {
            if (s[i] != t[n1 - i - 1])
            {
                f = 1;
                break;
            }
        }
    }

    if (f == 0)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}