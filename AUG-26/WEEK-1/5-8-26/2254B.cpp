// Evanescent

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 1;

    for(int i = 1; i < n; i++)
    {
        if(s[i]!=s[i-1])
        {
            cnt++;
        }
    }

    int delta = 0;

    for(int i = 1; i < n-1; i++)
    {
        int change;
        
        if(s[i]==s[i-1] || s[i]==s[i+1])
        {
            change = 0;
            delta = min(delta,change);
        }
        else if(s[i-1]==s[i+1])
        {
            change = -2;
            delta = min(delta,change);
        }
        else
        {
            change = -1;
            delta = min(delta,change);
        }
    }

    
    int ans = cnt + delta;

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