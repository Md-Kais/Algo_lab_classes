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

    int a[9] = {10, 5, 3, 7, 1, 35, 21, 22, 78};
    sort(a, a + 9);
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + 9, greater<int>());
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
