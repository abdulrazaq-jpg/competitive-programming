// Round Trip

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int R,X,D,n;
    cin >> R >> X >> D >> n;

    string s; cin >> s;

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '2')
        {
            if(R < X)
            {
                if(R > 0)
                {
                    R--;
                }
                else
                {
                    R++;
                }

                cnt++;
            }
            else
            {
                continue;
            }
        }
        else
        {
            cnt++;

            int x = R - D;

            if(R < 0)
            {
                R = x - 1;
            }
            else
            {
                R = x;
            }
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