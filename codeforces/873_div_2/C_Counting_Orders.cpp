#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define vi vector<int>
#define vll vector<ll>
#define rep(x, n) for (int i = x; i < n; i++)
const ll BIG_MOD = 1e9 + 7;

void solve()
{

    int n;
    cin >> n;

    vll a(n), b(n);

    rep(0, n) cin >> a[i];
    rep(0, n) cin >> b[i];

    Sort(a);
    Sort(b);

    long long ans = 1;

    ll count, x;
    rep(0, n)
    {
        count = upper_bound(b.begin(), b.end(), a[i] - 1) - b.begin();
        ans = (ans * (count - i)) % BIG_MOD;
    }

    if (ans < 0)
        ans = 0;

    cout << ans << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

// 2 4 5 6 8 9
// 6 6 5 4 3 2 <-- boshte parbe = 6 *
// 1 1 3 4 5 6

// 2 3 4
// 1 0 0 <-- boshte parbe = 0
// 3 4 9

// 2
// 1 <-- boshte parbe = 1
// 1

// 2 3 4
// 3 1 1 <-- boshte parbe 0 karon  1 multiple so ekisathe ek number dui place not possible
// 1 3 3
