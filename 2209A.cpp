// Flip Flops

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long n, c, k;
    cin >> n >> c >> k;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), std::less<long long>());

    for (int i = 0; i < n; i++)
    {
        if (c < v[i])
        {
            break;
        }

        long long add = min(k, c - v[i]);

        k -= add;
        c += add + v[i];
    }

    cout << c << "\n";
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

// EDITORIAL PADHA AUR YE CONCEPT SEEKHA

/* CONCEPT */

/*

📌 THE WATER TANK MENTAL MODEL (O(1) Optimization)

1. THE VARIABLES:
   • temp (The Bucket)      -> Your current value.
   • c    (The Safety Line) -> The maximum target limit you can reach.
   • k    (The Water Tank)  -> Your available resource pool (can be up to 10^18).

2. THE TLE PROBLEM: "Drop-by-Drop Simulation"
   while(temp < c && k > 0) { temp++; k--; } // ❌ DO NOT DO THIS (Triggers TLE if k is huge)

3. THE O(1) SOLUTION: "The Instant Pour"
   Calculate the exact amount to pour all at once using mathematical bottlenecks:

   long long space_left = max(0LL, c - temp); // How much room is left in the bucket
   long long added = min(k, space_left);      // Take only what fits OR what you actually have
   temp += added;                             // Fast-forward the bucket level instantly

4. GOLDEN RULE FOR CONTESTS:
   Never use a loop to count up/down to a boundary if the step size is constant.
   Always use min() and max() to calculate the exact distance to the boundary in 1 step.
   
*/