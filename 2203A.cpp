// Towers of Boxes

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;

    int ans = 0;
    int tw = n * m; // total weight of n towers
    int bpt = (m + d)/m; // boxes per tower

    if (m > d)
    {
        ans = n;
    }
    else
    {
        while (tw > 0)
        {
            tw = tw - (bpt * m);
            ans++;
        }
    }

    cout << ans << "\n";
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