#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1++;
        else if (s[i] == '2')
            c2++;
        else if (s[i] == '3')
            c3++;
    }

    bool first = true;

    while (c1--)
    {
        if (!first)
            cout << "+";
        cout << "1";
        first = false;
    }

    while (c2--)
    {
        if (!first)
            cout << "+";
        cout << "2";
        first = false;
    }

    while (c3--)
    {
        if (!first)
            cout << "+";
        cout << "3";
        first = false;
    }

    return 0;
}