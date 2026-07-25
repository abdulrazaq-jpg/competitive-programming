// Sleeping Through Classes

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n , k;
    cin >> n >> k;

    string s;
    cin >> s;

    int timer = 0;
    int cnt = 0;

    for(int i = 0 ; i < n; i++)
    {
        if(s[i]=='1')
        {
            timer = k;
        }
        else if(timer > 0)
        {
            timer --;
        }
        else
        {
            cnt++;
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