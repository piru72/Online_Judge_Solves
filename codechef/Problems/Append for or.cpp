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
#define binary_of(x) (bitset<32>(x).to_string().substr(31 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

void solve()
{
    ll n, y;
    cin >> n >> y;

    int temp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans |= temp;
    }
    for (int i = 0; i < y + 2; i++)
    {
        if ((ans | i ) == y)
        {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;

    // int final_ans = y - ans;
    // ((final_ans & y) == final_ans) ? cout << final_ans : cout << -1;
    // cout << endl;
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
