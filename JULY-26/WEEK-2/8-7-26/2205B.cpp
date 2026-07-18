// Simons and Cakes for Success

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long ans = 1;

    for(long long i = 2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                n /= i;
            }

            ans *= i;
        }
    }

    if(n > 1)
    {
        ans *= n;
    }

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