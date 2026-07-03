#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> a, vector<int> b, int c, int n)
{
    int time = 0;

    bool need_reorder = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            need_reorder = true;
        }

        time += (a[i] - b[i]);
    }

    if (need_reorder)
    {
        need_reorder = false;
        time += c;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                need_reorder = true;
            }
        }
    }

    if (need_reorder)
        return -1;

    return time;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int c;
        cin >> c;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int x1;
            cin >> x1;
            b.push_back(x1);
        }

        cout << solve(a, b, c, n) << "\n";
    }
    return 0;
}