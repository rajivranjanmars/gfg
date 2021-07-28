#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int makeProductOne(vector <int>v, int N)
{
    int c=0 , m=0;
    for (int i = 0; i <N; i++){
        if (v[i]<0)
        {
          m++;
          c+= (-1 - v[i]);  
        }
        else if (v[i]==0){
            c++;
            if (m%2==1)
            m++;
        }
        else
        c+= v[i]-1;

        //cout << v[i] << " " << c << endl;
    }
    if (m % 2 == 1)
        c += 2;
    return c;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int m = n;
    vector<int> v;
    int a;
    while (m--)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << makeProductOne(v, n);
    return 0;
}