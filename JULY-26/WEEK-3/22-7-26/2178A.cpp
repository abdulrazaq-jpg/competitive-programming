// Yes OR Yes

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve()
{
    string a; cin >> a;

    stack<char> s;

    char k = a[0];
    s.push(k);

    for(int i = 1; i < a.length() ; i++)
    {
        if(a[i] == 'N' && s.top() == 'Y')
        {
            continue;
        }
        else if(a[i]=='Y' && s.top()=='Y')
        {
            s.push(a[i]);
        }
        else
        {
            s.pop();
            s.push(a[i]);
        }
    }

    s.pop();

    if(s.empty())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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