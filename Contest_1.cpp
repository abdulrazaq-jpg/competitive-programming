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
    int length = 0;

    for(int i = 0; i < n ; i++)
    {
        if(s[i] == '#')
        {
            length++;
            max_length = max(max_length,length);
        }

        if(s[i]=='*')
        {
            length = 0;
        }
    }

    int ans;

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