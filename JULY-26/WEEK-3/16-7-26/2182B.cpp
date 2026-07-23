// New Year Cake

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solve()
{
    int a , b; cin >> a >> b;

    if(a == 1 && b == 1)
    {
        return 1;
    }

    if(a == 1 || b == 1)
    {
        return 2;
    }

    int cnt = 0;

    if(a > b)
    {
        while(a>=1)
        {
            a/=2;
            cnt++;
        }
    }
    else
    {
        while(b >=1)
        {
            b/=2;
            cnt++;
        }
    }

    return cnt;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int ans = solve();
        cout << ans << "\n";
    }

    return 0;
}