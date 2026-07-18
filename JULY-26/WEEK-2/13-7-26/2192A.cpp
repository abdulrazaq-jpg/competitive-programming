// String Rotation Game

#include <iostream>
#include <vector>
using namespace std;

int count_block(string &s)
{
    int cnt = 0;

    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            cnt++;
        }
    }

    return cnt;
}

void reverse(string &s , int l , int r)
{
    int i = l;
    int j = r;

    while(j > i)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int block_cnt = count_block(s);


    reverse(s,0,n-1);
    reverse(s,1,n-1);

    for(int i = 1 ; i <= n ; i++)
    {
        reverse(s,0,n-1);
        reverse(s,1,n-1);
        block_cnt = max(block_cnt , count_block(s));
    }

    cout << block_cnt+1 << "\n";
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

// SOLVED MYSELF

/*

=========================================
THE OPTIMIZED O(n) STRATEGY
=========================================

💡 Core Insight:
-----------------------------------------
Instead of simulating rotations, we can just check if it's possible to split a block:

1. Count how many total blocks the original string has linearly.
2. Check if there is any character 'c' that appears at both the very beginning 
   and the very end of any cyclic rotation. 
   
   This is true if and only if the original string has the same character 
   adjacent somewhere (i.e., s[i] == s[i+1]) AND that character isn't the 
   only character in the string.


🗺️ The Rules:
-----------------------------------------
* More simply: If the original string has all distinct characters (like "abcd"), 
  the answer is just 'n'.

* If it has duplicates, we can always find a clever place to cut it such that 
  the front and back characters match, splitting a block and giving us:

  Answer = Circular Block Count + 1
=========================================

*/