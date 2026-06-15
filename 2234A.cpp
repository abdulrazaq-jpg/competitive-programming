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
        int k;
        cin >> k;

        vector<int> v;

        while (k--)
        {
            int n;
            cin >> n;
            v.push_back(n);
        }

        sort(v.begin(), v.end(), greater<long long>());

        vector<int> gen;

        gen.push_back(v[0]);
        gen.push_back(v[1]);

        for (int i = 2; i < v.size(); i++)
        {
            if (v[i] == v[i - 2] % v[i - 1])
            {
                gen.push_back(v[i]);
            }
        }

        if (gen.size() == v.size())
            cout << v[0] << " " << v[1] << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}