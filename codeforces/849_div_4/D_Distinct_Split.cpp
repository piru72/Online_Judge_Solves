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

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> va(26, 0);
    vector<int> vb(26, 0);

    for (auto x : str)
        va[x - 'a']++;
    int m = str.size() / 2;

    int ans = -1;
    for (auto x : str)
    {
        --va[x - 'a'];
        ++vb[x - 'a'];

        int cur = 0;
        for (int i = 0; i < 26; ++i)

            cur += min(1, va[i]) + min(1, vb[i]);

        ans = max(ans, cur);
    }

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