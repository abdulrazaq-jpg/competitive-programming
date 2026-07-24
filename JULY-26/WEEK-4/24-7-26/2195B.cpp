// Heapify 1

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n+1);

    for(int i = 1; i <= n ; i++)
    {
        cin >> v[i];
    }

    for(int  i = 1; i <= n ; i+=2)
    {
        for(int j = i; j <= n; j*=2)
        {
            for(int k = j; k<=n; k*=2)
            {
                if(v[k] < v[j])
                {
                    swap(v[j],v[k]);
                }
            }
        }
    }

    bool flag = true;

    for(int i = 1; i < n; i++)
    {
        if(v[i] > v[i+1])
        {
            flag = false;
            break;
        }
    }

    if(flag)
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