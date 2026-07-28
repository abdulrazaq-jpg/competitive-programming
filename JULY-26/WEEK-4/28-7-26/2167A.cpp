// Square?

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int a , b, c, d;
    cin >> a >> b >> c >> d;

    if(a==b && a==c && a==d)
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