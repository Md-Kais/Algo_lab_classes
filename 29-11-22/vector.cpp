// https://www.geeksforgeeks.org/vector-in-cpp-stl/
// o(1)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
int main()
{

    optimize();

    vector<int> v; // create vector
    v.push_back(23535);
    v.push_back(235);
    v.push_back(2535);
    v.push_back(2353);
    v.push_back(238);
    int z=v.size();//length 
    for(int i=0;i<z;i++){
        cout<<v[i]<<" ";
    }
    cout<<"After sort\n";
    sort(v.rbegin(),v.rend());//reverse sort;
    for (int i = 0; i < z; i++)
    {
        cout << v[i] << " ";
    }
    v.clear();//delete vector
    //for each loop
    // for (auto e : v)
    // {
    //     cout << e << endl;
    // }
    return 0;
}
