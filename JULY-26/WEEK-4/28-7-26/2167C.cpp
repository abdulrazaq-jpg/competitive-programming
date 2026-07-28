// Isamatdin and His Magic Wand!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool odd = false;
    bool even = false;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] & 1)
        {
            odd = true;
        }
        else
        {
            even = true;
        }
    }

    if (odd and even)
    {
        sort(v.begin(), v.end());
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << "\n";
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