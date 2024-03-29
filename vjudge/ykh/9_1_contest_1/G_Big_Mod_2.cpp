#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int 
#define endl "\n"

ull B, P, M;

ull mulmod(ull x, ull y, ull mod)
{ 
    ull ans = 0;
    while (y > 0) {
        if (y & 1) {
            ans = (ans + x) % mod;
        }
        x = (x + x) % mod;
        y >>= 1;
    }
    return ans;
}
ull power(ull x, ull n, ull mod)
{ 
    ull ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = mulmod(ans, x, mod);
        }
        x = mulmod(x, x, mod);
        n >>= 1;
    }
    return ans;
}

void solve()
{   
    
    cout << power(B, P, M) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;

    while (cin >> B >> P >> M)
    {
        solve();
    }
    return 0;
}