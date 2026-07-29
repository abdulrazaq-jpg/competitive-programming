// Sequence Game

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int M = -1e9;
    int m = 1e9;

    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;

        if(x > M)
        {
            M = x;
        }

        if(x < m)
        {
            m = x;
        }
    }

    int k;
    cin >> k;

    if(k >= m && k <=M)
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

    while(t--)
    {
        solve();
    }

    return 0;
}