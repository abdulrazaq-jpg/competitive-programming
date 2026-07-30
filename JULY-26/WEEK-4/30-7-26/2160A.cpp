// MEX Partition

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int freq[101] = {0};

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        freq[x]++;
    }

    for(int i = 0; i <= 100; i++)
    {
        if(freq[i] == 0)
        {
            cout << i << "\n";
            return;
        }
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