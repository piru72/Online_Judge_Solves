#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MAXN = 105;
const int MAXW_ = 1e5 + 5;

int W[MAXN], V[MAXN];

ll dp[MAXN][MAXW_];

int n, capacity;

ll getMaxProfit(int at = 1, int taken = 0)
{

    if (at > n)
        return 0;

    if (dp[at][taken] != -1)
        return dp[at][taken];

    ll excluded = getMaxProfit(at + 1, taken);

    ll included = 0;

    if (taken + W[at] <= capacity) {
         //cout << "AT I : " << at << " I : " << included << " E : " << excluded << " TA : " << taken << endl;
        included = V[at] + getMaxProfit(at + 1, taken + W[at]);
    }

    //cout << "AT E : " << at << " I : " << included << " E : " << excluded << " TA : " << taken << endl;
    //cout << endl;
    return dp[at][taken] = max(excluded, included);
}


void solve()
{

    cin >> n >> capacity;

    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= n; i++) {
        cin >> W[i] >> V[i];
    }

    cout << getMaxProfit() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}