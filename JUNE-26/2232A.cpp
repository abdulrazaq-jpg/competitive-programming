#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        while (n--)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }

        sort(v.begin(), v.end(), less<int>());

        int cnt = 0;
        int size = v.size();
        int mid = v[size / 2];

        for (int i = 0; i < size / 2; i++)
        {
            if (v[i] != mid || v[size-i-1] != mid)
            {
                v[i] = mid;
                cnt++;
            }
            else
                i++;
        }

        cout << cnt << "\n";
    }

    return 0;
}