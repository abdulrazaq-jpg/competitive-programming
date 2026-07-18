// DBMB and Array

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> v(n);

    int SUM = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        SUM += v[i];
    }

    int ans = s - SUM;

    while (ans > 0)
    {
        ans -= x;
    }

    if (ans == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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

// SOLVED MYSELF BUT OVER COMPLICATED THE LOGIC EDITORIAL HAS A BETTER APPROACH OF (s-sum) % x 