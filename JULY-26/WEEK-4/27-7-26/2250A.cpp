// Threshold Movement

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool flag = true;

    vector<int> v;
    vector<int> odd;
    vector<int> even;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);

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
                m = odd[i];
        }

        int M = even[0];
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] > M)
                M = even[i];
        }

        int diff = (m - M);

        if (diff <= 1)
        {
            flag = false;
        }
        else
        {
            flag = false;
            for (int k = M + 1; k < m; k++)
            {
                bool matches_any_element = false;

                for (int j = 0; j < n; j++)
                {
                    if (v[j] == k)
                    {
                        matches_any_element = true;
                        break;
                    }
                }

                if (!matches_any_element)
                {
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag)
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