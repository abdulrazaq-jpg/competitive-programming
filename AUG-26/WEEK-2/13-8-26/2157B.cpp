// Expansion Plan 2

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n,x,y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    int cnt_8 = 0;
    int cnt_4 = 0;

    for(int i = 0; i <n; i++)
    {
        if(s[i] == '8')
        {
            cnt_8++;
        }
        else{
            cnt_4++;
        }
    }

    x = abs(x);
    y = abs(y);

    if(x > n || y > n)
    {
        cout << "NO\n";
        return;
    }

    if(x <= cnt_8)
    {
        if(y <= n)
        {
            cout << "YES\n";
            return;
        }
    }

    if(x > cnt_8)
    {
        int target = x - cnt_8;

        if(y <= (n-target))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";

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