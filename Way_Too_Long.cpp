#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        int n = s.length();
        int p = n - 2;

        if (n > 10)
            cout << s[0] << p << s[n - 1] << endl;
        else
            cout << s << endl;
    }

    return 0;
}