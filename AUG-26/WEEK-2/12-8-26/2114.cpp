// Square Year

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve()
{
    int n; cin >> n;

    int square_root = ceil(sqrt(n));

    if(square_root * square_root == n)
    {
        cout << 0 << " " << n << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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