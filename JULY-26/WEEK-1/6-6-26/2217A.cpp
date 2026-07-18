// The Equalizer

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    bool flag = true;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if(sum % 2 == 0)
    {
        if((k*n) % 2 != 0)
        {
            flag = false;
        }
    }

    if (flag)
        cout << "yes" << "\n";

    else
        cout << "no" << "\n";
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

// KHUD SE KIYA