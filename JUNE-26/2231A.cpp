# include <iostream>
# include <vector>
# include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for(int i = 1; i <= n; i++)
        {
            int x = (2*i)-1 ;

            v.push_back(x);

        }

        for(int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }

        cout << "\n";
    }
    
    return 0;
}