// Carnival Wheel

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int l , a, b;
    cin >> l >> a >> b;

    vector<int> ans(l);

    for(int i = 0; i < l; i++)
    {
        int x = (a + (i*b)) % l;
        ans[i] = x;
    }

    int max = ans[0];

    for(int i = 1; i < l; i++)
    {
        if(ans[i] > max)
        {
            max = ans[i];
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