// Zero Sum

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    int cnt_1 = 0;
    int cnt_2 = 0;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;

        if(x==1)
        {
            cnt_1++;
        }
        else
        {
            cnt_2++;
        }
    }

    if(n&1)
    {
        cout << "NO\n";
    }
    else
    {
        if(n % 4 == 0)
        {
            if(!(cnt_1&1) && !(cnt_2&1))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if((cnt_1&1) && (cnt_2&1))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
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


/* Alternate
 Just check (abs(sum % 4) == 0 )
*/

