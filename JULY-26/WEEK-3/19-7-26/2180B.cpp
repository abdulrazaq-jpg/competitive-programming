// Ashmal

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string s = "";

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string a;
        cin >> a;

        if (s.empty())
        {
            s = a;
        }
        else
        {
            if ((a + s) > (s + a))
            {
                s = s + a;
            }
            else
            {
                s = a + s;
            }
        }
    }

    cout << s << "\n";
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