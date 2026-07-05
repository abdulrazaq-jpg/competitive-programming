// The 67th Permutation Problem

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int p = 3 * n;

    vector<int> a(p);

    int temp1, temp2;

    temp1 = 1;

    for (int i = 0; i < p; i += 3)
    {
        a[i] = temp1;
        temp1++;
    }

    temp2 = n + 1;
    for (int i = 1; i < p; i += 3)
    {
        a[i] = temp2;
        a[i + 1] = a[i] + 1;
        temp2 += 2;
    }

    for (int i = 0; i < p; i++)
    {
        cout << a[i] << " ";
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

// KHUD SE KIYA