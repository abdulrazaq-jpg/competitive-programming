// Little Fairy's Painting

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    unordered_map<int, int> map;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (map[v[i]] == 0)
        {
            map[v[i]]++;
            cnt++;
        }
    }

    while (map[cnt] == 0)
    {
        map[cnt]++;
        cnt++;
    }
    
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}




/* SET APPROACH

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int> present;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        present.insert(x);
    }

    int cnt = present.size();

    // Repeatedly check if the distinct count exists in the set
    while (present.find(cnt) == present.end()) {
        present.insert(cnt);
        cnt++;
    }

    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

*/