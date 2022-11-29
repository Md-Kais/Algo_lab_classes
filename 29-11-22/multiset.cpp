// set and multiset
// red black tree
//  O(logn)
//  sorted order
// https://www.geeksforgeeks.org/set-in-cpp-stl/
// https://www.geeksforgeeks.org/multiset-in-cpp-stl/

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

   //create set
   multiset<int>s;
   //data insertion
   s.insert(34);
   s.insert(34);
   s.insert(4);
   s.insert(3);
   s.insert(34323);
   s.insert(1);
   ///s.size();//length
   cout<<s.count(34)<<endl;
   for(auto e: s){
    cout<<e<<" ";
   }
   return 0;
}
