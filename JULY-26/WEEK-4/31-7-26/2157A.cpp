// Dungeon Equilibrium

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    sort(v.begin(), v.end());
    
    int rem = 0;

    for (int x : s)
    {
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == x)
            {
                cnt++;
            }
        }

        if (cnt >= x)
        {
            rem = rem + (cnt - x);
        }
        else
        {
            rem = rem + cnt;
        }
    }

    cout << rem << "\n";
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