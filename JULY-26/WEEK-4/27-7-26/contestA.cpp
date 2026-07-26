// Threshold Movement

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve()
{
    int n;
    cin >> n;

    bool flag = true;

    vector<int> odd;
    vector<int> even;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (i % 2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    if (n % 2 != 0)
    {
        flag = false;
    }
    else
    {
        int m = odd[0];

        for (int i = 0; i < odd.size(); i++)
        {
            if (odd[i] < m)
            {
                m = odd[i];
            }
        }

        int M = -1;

        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] > M)
            {
                M = even[i];
            }
        }

        int diff = abs(M - m);

        if (diff <= 1)
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