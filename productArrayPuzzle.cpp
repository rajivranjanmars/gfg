// { Driver Code Starts
//Initial template for C++

#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {
        unsigned long long  product = 1;
        int zerocount = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0)
                zerocount++;
            else
            product *= nums[i];
        }

        
        if (zerocount == 0){
            for (int i = 0; i < n; i++){
                nums[i] = product / nums[i];
            }
            return nums;
        }
        else if (zerocount == 1){
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                    nums[i] = product;
                else
                 nums[i] = 0;
            }
            return nums;
        }
        else{
            vector<long long int>s (n,0);
            return s;
       }
    }
    };

    // { Driver Code Starts.
    int main()
    {
        int t; // number of test cases
        cin >> t;
        while (t--)
        {
            int n; // size of the array
            cin >> n;
            vector<long long int> arr(n), vec(n);

            for (int i = 0; i < n; i++) // input the array
            {
                cin >> arr[i];
            }
            Solution obj;
            vec = obj.productExceptSelf(arr, n); // function call

            for (int i = 0; i < n; i++) // print the output
            {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
        return 0;
    } // } Driver Code Ends