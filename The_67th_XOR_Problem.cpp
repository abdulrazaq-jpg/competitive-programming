#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = a[i] ^ a[j];
                v.push_back(x);
            }
        }

        int max = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > v[max])
            {
                max = i;
            }
        }

        cout << v[max];
        cout << endl;
    }

    return 0;
}