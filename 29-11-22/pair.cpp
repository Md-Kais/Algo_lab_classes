//pair 
// vector<int>v;
// vector<pair<int,string>>d;
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
    //vector<data type>name
    // vector<int>v={353,23,13413}
    //vector<pair<data type, data type>>name;
    vector<pair<int,string>>v;//create pair
    v.push_back({34, "sdfaas"});
    v.push_back({24, "sdfaas"});
    v.push_back({14, "sdfaas"});
    v.push_back({14, "sdfs"});
    v.push_back({374, "sdfaas"});
    v.push_back({3445, "sdfaas"});
    sort(v.begin(),v.end());
    for(auto e: v){
        cout<<e.first<<" "<<e.second<<endl;
    }
    
    return 0;
}
