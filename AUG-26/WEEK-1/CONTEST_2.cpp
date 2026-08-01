// Merge to Match

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if(n == 2 && m == 1)
    {
        int k = max(a[0],a[1]);
        int p = min(a[0],a[1]);

        if(b[0] >= p && b[0] <= k)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    int diff = n - m;

    bool flag = true;

    if (diff < 0)
    {
        flag = false;
    }
    else if (diff == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                flag = false;
                break;
            }
        }
    }
    else if (diff == 1)
    {
        flag = false;
    }
    else
    {
        int max_a = a[0];
        int min_a = a[0];

        for (int i = 0; i < n; i++)
        {
            int x = a[i];

            if (x > max_a)
            {
                max_a = x;
            }

            if (x < min_a)
            {
                min_a = x;
            }
        }

        int max_b = b[0];
        int min_b = b[0];

        for (int i = 0; i < m; i++)
        {
            int y = b[i];

            if (y > max_b)
            {
                max_b = y;
            }

            if (y < min_b)
            {
                min_b = y;
            }
        }

        if ((max_a < max_b) || (min_a > min_b))
        {
            flag = false;
        }
    }

    if (flag)
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