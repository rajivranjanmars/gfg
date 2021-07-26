#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int MissingNumber(vector<int> &array, int n){
    sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); i++){
        if (array[i] != i + 1)
            return i + 1;
    }
    return n;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int m = n - 1;
    vector<int> v;
    int a;
    while (m--){
        cin >> a;
        v.push_back(a);
    }
    cout << MissingNumber(v, n);
    return 0;
}