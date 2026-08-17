// Homework

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    string a; cin >> a;

    int m; cin >> m;

    string b , c;
    cin >> b >> c;

    for(int i = 0; i < m; i++)
    {
        if(c[i] == 'D')
        {
            a = a + b[i];
        }
        else
        {
            a = b[i] + a;
        }
    }

    cout << a << "\n";
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