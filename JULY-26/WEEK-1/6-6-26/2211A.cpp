// Antimedian Deletion

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int  i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    if(n==1)
    {
        cout << 1;
    }

    else
    {
        for(int  i = 0; i< n; i++)
        {
            cout << 2 << " ";
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

// KHUD SE KIYA