// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        return N / 5 + N / 25 + N / 125 + N / 625 + N / 3125 + N / 15625 + N / 78125 + N / 390625 + N / 1953125 + N / 9765625 + N / 48828125 + N / 244140625;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.trailingZeroes(N);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends