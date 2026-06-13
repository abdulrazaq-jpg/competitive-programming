#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1)
        c = tolower(c);

    for (char &c : s2)
        c = tolower(c);

    int n = s1.length();

    for (int i = 0; i < n; i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1;
            return 0;
        }

        else if (s1[i] > s2[i])
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}