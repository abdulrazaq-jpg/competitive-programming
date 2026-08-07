// Boss Fight

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    int arr[1000] = {0};

    for(int i = 0; i < n ; i++)
    {
        cin >> v[i];
        arr[v[i]]++;
    }

    int max_num = 0;

    for(int i = 0; i < 1000; i++)
    {
        if(arr[i] > arr[max_num])
        {
            max_num = i;
        }
    }

    int cnt_max = arr[max_num];

    int sum = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] != max_num)
        {
            sum += v[i];
            cnt++;
        }
    }

    int gap = cnt + 1;

    if(arr[max_num] > gap)
    {
        sum = sum + ((gap + 1) * max_num);
    }
    else if(gap > arr[max_num])
    {
        sum = sum + (cnt_max * max_num);
    }
    else
    {
        sum = sum + (gap * max_num);
    }

    cout << sum << "\n";
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