#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n + 1; i <= 9999; i++)
    {
        vector<int> v; 

        int f = i;

        while (f > 0)
        {
            int d = f % 10;
            v.push_back(d);
            f /= 10;
        }

        int z = 0;

        for (int j = 0; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[j] == v[k])
                {
                    z = 1;
                }
            }
        }

        if (z == 0)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}