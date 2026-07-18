// Reverse a Permutation

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int l = 0;

    while (l < n && p[l] == n - l)
    {
        l++;
    }

    int r = -1;

    for (int i = l; i < n; i++)
    {
        if (p[i] == n - l)
        {
            r = i;
        }
    }

    for (int i = 0; i < l; i++)
    {
        cout << p[i] << " ";
    }

    if (r != -1)
    {
        for (int i = r; i >= l; i--)
        {
            cout << p[i] << " ";
        }

        for (int i = r + 1; i < n; i++)
        {
            cout << p[i] << " ";
        }
    }

    cout << "\n";
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


// SAW THE SOLUTION IN THE EDITORIAL COZ MY METHOD WAS O(n^2) METHOD