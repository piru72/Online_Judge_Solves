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

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n + 1);

    for (int j = 0; j < m; j++)
    {
        int s, d;

        cin >> s >> d;
        grid[s].push_back(d);
        grid[d].push_back(s);
    }

    vector<int> v(n + 1, 1);

    for (int i = 1; i <= n; i++)
    {

        if (grid[i].size() == 0)
            v[i] = 0;
        else if (grid[i].size() == 1)
        {
            v[i] = 0;
            v[grid[i][0]] = 0;
        }    
    }

    for (int j = 1; j <= n; j++)
    {
        if (v[j] == 1)
            cout << grid[j].size() << " " << grid[grid[j][0]].size() - 1 << endl;
    }
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
