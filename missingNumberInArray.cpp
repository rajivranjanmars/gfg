#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int MissingNumber(vector<int> &array, int n){
   
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int m = n ;
    vector<int> v;
    int a;
    while (m--){
        cin >> a;
        v.push_back(a);
    }
    cout << MissingNumber(v, n);
    return 0;
}