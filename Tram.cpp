#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    int capacity = 0;
    int max = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int diff = v[i].second - v[i].first;
        capacity += diff;

        if (capacity > max)
            max = capacity;
    }

    cout << max;

    return 0;
}