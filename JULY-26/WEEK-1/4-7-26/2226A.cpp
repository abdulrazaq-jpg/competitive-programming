// Disturbing Distribution

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 1)
        {
            ans += a[i];
        }
    }

    if (a.back() == 1)
    {
        ans++;
    }

    cout << ans % 676767677 << "\n";
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