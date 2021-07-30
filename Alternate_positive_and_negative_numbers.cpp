// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        int a[n];
        for (int i = 0; i < n; i++){
            a[i] = arr[i];
        }
        int j = 0, k = 0;
        for (int i = 0; i < n; ){
            while (a[j] < 0 && j < n)
                j++;
            if (j != n){
                
                arr[i] = a[j];
                j++;
                i++;
            }
            while (a[k] >= 0 && k < n)
                k++;
            if (k != n){
                arr[i] = a[k];
                k++;
                i++;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
