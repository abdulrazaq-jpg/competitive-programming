#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int max = 1;
        int min = 6;

        vector<int> heights(n);
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];

            if (heights[i] > max)
                max = heights[i];

            if (heights[i] < min)
            {
                min = heights[i];
            }
        }

        int min_k;

        min_k = max - min + 1;

        cout << min_k << "\n";
    }

    return 0;
}