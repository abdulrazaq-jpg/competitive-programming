// Deletion Sort

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n > 1)
    {
        int cnt = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                cnt++;
            }
        }

        if (cnt == n - 1)
        {
            cout << n << "\n";
        }

        else
        {
            cout << 1 << "\n";
        }
    }

    else
    {
        cout << 1 << "\n";
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

// SOLVED MYSELF

/* EDITORIAL LOGIC

if (is_sorted(a.begin(), a.end())) cout << n << '\n';

    else cout << "1\n";
    
*/