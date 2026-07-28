// Impost or Sus

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string r;
    cin >> r;

    int cnt = 0;
    int cnt_s = 0;

    if(r[0] == 'u')
    {
        r[0] = 's';
        cnt++;
    }
    else
    {
        r[0] = 's';
    }

    // cout << r << "\n";
    // cout << r.length()-1 <<"\n";

    for(int i = 0 ; i < r.length() ; i++)
    {
        if(r[i] == 'u')
        {
            if(r[i+1] == 'u')
            {
                r[i+1] = 's';
                cnt++;
            }
        }
        else
        {
            cnt_s++;
        }
    }

    if(r[r.length() - 1] == 'u')
    {
        r[r.length() - 1] = 's';
        cnt++;
    } 

    if(cnt_s >= 2)
    {
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