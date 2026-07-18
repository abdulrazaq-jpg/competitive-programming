#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = true;

    long long store = 0;
    int i = 0;
    int track = n;

    while(track--)
    {
        a[i] += store;
        store = 0;
        long long x = a[i] - (i + 1);

        if(x <= 0)
        {
            i++;
        }

        else
        {
            a[i] = (i+1);
            store = x;
            i++;
        }
    }

    for (int i = 1; i < n; i++)
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