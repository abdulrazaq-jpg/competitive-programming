// Specialty String

#include <iostream>
#include <vector>
using namespace std;

bool logic(string s)
{
    if (s.empty())
    {
        return true;
    }

    int k = s.length();

    string a = "";

    for (int i = 0; i < k; i++)
    {
        if (i < k - 1 && (s[i] == s[i + 1]))
        {
            i++;
        }
        else
        {
            a += s[i];
        }
    }

    if (a == s)
    {
        return false;
    }

    return logic(a);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (logic(s))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}