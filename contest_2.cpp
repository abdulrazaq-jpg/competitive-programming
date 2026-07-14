#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = true;

    int store = 0;
    int i = 0;
    int track = n;

    while(track--)
    {
        a[i] += store;
        store = 0;
        int x = a[i] - (i + 1);
        int k = a[i] - x;

        if(k == 0)
        {
            i++;
        }

        else
        {
            a[i] = k;
            store = x;
            i++;
        }
    }

    for (int i = 1; i <=n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            flag = false;
            break;
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