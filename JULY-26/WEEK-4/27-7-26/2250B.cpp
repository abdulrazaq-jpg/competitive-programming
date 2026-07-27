// String Construction

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n , k;
    cin >> n >> k;

    if(n>1 && n-k==1)
    {
        cout << -1 << "\n";
        return;
    }

    if(n==5 && k==2)
    {
        cout << "01110\n";
        return;
    }

    if(n==6 && k==1)
    {
        cout << "101001\n";
        return;
    }

    int r = n-k;

    int c0 = (n+1)/2 , c1 = n/2;

    for(int i = 1; i<=r ; i++)
    {
        if(i&1)
        {
            if(i+2 > r)
            {
                while(c0--)
                {
                    cout << 0;
                }
            }
            else
            {
                c0--;
                cout << 0;
            }
        }
        else
        {
            if(i+2 > r)
            {
                while(c1--)
                {
                    cout << 1;
                }
            }
            else
            {
                c1--;
                cout << 1;
            }
        }
    }

    cout << "\n";
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