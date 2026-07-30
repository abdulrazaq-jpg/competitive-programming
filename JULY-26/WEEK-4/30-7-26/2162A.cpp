// Beautiful Average

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int max = -1;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;

        if(x > max)
        {
            max = x;
        }
    }

    cout << max << "\n";
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