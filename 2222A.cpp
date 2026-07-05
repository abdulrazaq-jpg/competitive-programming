// A Wonderful Contest

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] == 100)
            flag = true;
    }

    if (flag)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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

// Editorial Dekha----Hint Se Nai Smjha