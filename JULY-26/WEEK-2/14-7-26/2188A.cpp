// Divisible Permutation

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = n / 2 + 1;

    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans = ans - i;
                cout << ans << " ";
            }
            else
            {
                ans = ans + i;
                cout << ans << " ";
            }
        }

        cout << "\n";
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans = ans + i;
                cout << ans << " ";
            }
            else
            {
                ans = ans - i;
                cout << ans << " ";
            }
        }
        cout << "\n";
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