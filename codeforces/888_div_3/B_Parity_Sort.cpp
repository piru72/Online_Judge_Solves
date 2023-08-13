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
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    int n;
    cin >> n;
    vi v(n), odd, even, cute;
    rep(0, n)
    {
        cin >> v[i];
        v[i] % 2 == 0 ? even.push_back(v[i]) : odd.push_back(v[i]);
    }
    Sort(odd);
    Sort(even);

    int odd_i = 0, even_i = 0;

    rep(0, n) v[i] % 2 == 1 ? (cute.push_back(odd[odd_i]), odd_i++) : (cute.push_back(even[even_i]), even_i++);

    is_sorted(cute.begin(), cute.end()) ? cout << "YES" << endl : cout << "NO" << endl;
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