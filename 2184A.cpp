// Social Experiment

#include <iostream>
#include <vector>
using namespace std;

int solve()
{
    int n;
    cin >> n;

    if (n == 2)
        return 2;

    if (n == 3)
        return 3;

    if (n % 2 == 0)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int ans = solve();

        cout << ans << "\n";
    }

    return 0;
}

// SOLVED MYSELF