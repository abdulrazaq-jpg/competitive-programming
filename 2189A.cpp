// Table with Numbers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, h , l;
    cin >> n >> h >> l;

    vector<int> v;

    for(int i = 0; i < n ; i ++)
    {
        int x;
        cin >> x;

        if((x <= h)|| (x <= l))
        {
            v.push_back(x);
        }
    }

    sort(v.begin(),v.end(),std::greater<int>());

    int cnt = 0;
    int i = 0;
    int j = v.size() - 1;

    if(h >= l)
    {
        while(j > i)
        {
            if((v[i] <= h) && (v[j] <= l))
            {
                cnt++;
            }

            i++;
            j--;
        }
    }

    if(h < l)
    {
        while(j > i)
        {
            if((v[i] <= l) && (v[j] <= h))
            {
                cnt++;
            }

            i++;
            j--;
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

// SOLVED MYSELF