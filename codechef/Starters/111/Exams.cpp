#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y, z;
    cin >> x >> y >> z;

    if (z *2  > (x * y)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}