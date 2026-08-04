// You Delete , I Delete

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int a , b ;

    for(int i = 0 ;i < s.length(); i++)
    {
        if(s[i] == '0')
        {
            a = i;
            break;
        }
    }

    for(int i = 0 ;i < s.length(); i++)
    {
        if(s[i] == '1')
        {
             b= i;
            break;
        }
    }

    for(int i = 0; i < s.length(); i++)
    {
        if(i == a || i == b)
        {
            continue;
        }
        else
        {
            cout << s[i];
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