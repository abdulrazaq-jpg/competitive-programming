// Pizza Time

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    int cnt = 0;

    if(n & 1)
    {
        while(n>1)
        {
            n = n - 2;
            cnt++;
        }
    }
    else
    {
        while(n>2)
        {
            n = n - 2;
            cnt++;
        }
    }

    cout << cnt << "\n";
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