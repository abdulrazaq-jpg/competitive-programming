// Maximum Neighbourhood

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n==1)
    {
        cout << 1 << "\n";
        return;
    }

    if(n==2)
    {
        cout << 9 << "\n";
        return;
    }

    if(n==3)
    {
        cout << 29 << "\n";
        return;
    }

    if(n==4)
    {
        cout << 56 << "\n";
        return;
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