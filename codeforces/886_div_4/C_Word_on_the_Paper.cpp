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

    string str;
    int col = -1;
    string ans = "";
    rep(0, 8)
    {
        cin >> str;

        if (col == -1)
        {
            for (int j = 0; j < 8; j++)
            {
                if (isalpha(str[j]))

                {
                    col = j;
                    break;
                }
            }
        }

        if (col != -1)
        {
            if (isalpha(str[col]))
                ans += str[col];
        }
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