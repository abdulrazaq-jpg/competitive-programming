// Lawn Mower

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n , w;
    cin >> n >> w;

    int ans = n - (n/w);

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}

// SOLVED MYSELF