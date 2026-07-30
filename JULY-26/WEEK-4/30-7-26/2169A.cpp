// Alice and Bob

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n ,a;
    cin >> n >> a;

    int x = 0;
    int y = 0;

    for(int i = 0; i < n ; i++)
    {
        int k;
        cin >> k;

        if(k > a)
        {
            x++;
        }
        else if(k < a)
        {
            y++;
        }
        else
        {
            continue;
        }
    }

    int b = 0;

    if(x > y)
    {
        b = a + 1;
    }
    else
    {
        b = a - 1;
    }

    cout << b << "\n";
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