#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_length = 0;
    int length = 1;

    for(int i = 1; i < n ; i++)
    {
        if((s[i] == '#') && (s[i-1]=='#'))
        {
            length++;
            max_length = max(max_length,length);
        }

        if(s[i]=='*')
        {
            length = 1;
        }
    }

    int ans = 0;

    if(max_length % 2 == 0)
    {
        ans = max_length/2;
    }
    else
    {
        ans = (max_length/2) + 1;
    }

    cout << ans <<"\n";
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