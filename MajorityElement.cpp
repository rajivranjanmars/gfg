// { Driver Code Starts
//Initial Template for C

#include <stdbool.h>
#include <stdio.h>

// } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    int s=size;
for (int i = size-1; i >=size/2 -1 ; i--){
    int maxCount =0;
    for (int j = size - 1; j >= 0; j--){
        if (a[i]==a[j])
        maxCount++;
    }
    size--;
    if(maxCount>s/2)
    return a[i];   
}
return -1;
}

// { Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }
    return 0;
}
// } Driver Code Ends