// Zhily and Array Operating

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    for(int i = n-2; i>=0; i--)
    {
        long long a = 0;

        if(v[i+1] > 0)
        {
            a +=  v[i] + v[i+1];
            v[i] = a;
        }
    }

    int cnt = 0;

    for(long long x: v)
    {
        if(x>0)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

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

// Sirf Integer Overflow Hua Tha To Wo Dekh Liya