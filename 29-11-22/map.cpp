//map
//ologn
//pair
//sorted
//unique
// set+pair
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define test int tc; cin>> tc; while(tc--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
int main(){

    optimize();

    map<int,int>m;//create map
    m.insert({34, 54});
    m.insert({24, 54});
    m.insert({14, 54});
    m.insert({04, 54});
    m.insert({04, 54});
   
    for (auto e : m)
    {

        cout << e.first << " " << e.second << endl;
    }
    cout<<m.count(04)<<endl;//2
    return 0;
}
