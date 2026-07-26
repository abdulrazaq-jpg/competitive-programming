// Shizuku Hoshikawa and Farm Legs

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;

    if(n%2 != 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        for(int i = 0; i<=100; i++)
        {
            for(int j = 0; j<=100; j++)
            {
                int k = (2*i) + (4*j);

                if(k==n)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
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