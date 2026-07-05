// Koshary

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x % 2 == 1 && y % 2 == 1)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
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