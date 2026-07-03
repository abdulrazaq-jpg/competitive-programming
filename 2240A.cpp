#include <iostream>
#include <cmath>
using namespace std;

int solve(int n , int k)
{
    int p = 1;
    int bits = 0;

    while(n>0)
    {
        if(n >= (p*k))
        {
            bits += k;
            n -= p*k;
        }

        else
        {
            bits += (n/p);
            break;
        }

        p *= 2;
    }

    return bits;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n , k;
        cin >> n >> k;

        int ans = solve(n,k);

        cout << ans << "\n";
        
    }

    return 0;
}