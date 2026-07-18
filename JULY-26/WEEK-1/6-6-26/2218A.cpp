// The 67th Integer Problem

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int x;
    cin >> x;

    if (x >= 66)
        cout << 67 << "\n";

    else
        cout << x + 2 << "\n";
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