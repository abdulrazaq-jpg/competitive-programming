// We Be Flipping (Easy Version)

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }

    int cnt_flips = 0;
    vector<int> ind;

    for(int i = n-1 ; i >= 0; i--)
    {
        long long cur_value = (cnt_flips % 2 == 0) ? v[i] : -v[i];

        if(cur_value > 0)
        {
            long long x = i+1;
            cnt_flips++;
            ind.push_back(x);
        }
    }

    cout << cnt_flips << "\n";

    for(int  i = 0; i< ind.size(); i++)
    {
        cout << ind[i] << " ";
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