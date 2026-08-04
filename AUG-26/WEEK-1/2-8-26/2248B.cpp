// Merge and Match

#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n < 2 * m)
    {
        cout << "No\n";
        return;
    }

    int i = 0;

    while (i < m && a[i] < b[i] && b[i] < a[n - m + i])
    {
        ++i;
    }

    if (i < m)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
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