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

    ll n;
    cin >> n;

    ll sum = (n * (n + 1)) >> 1;

    ll half = sum >> 1;

    if (sum & 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vector<ll> v (n+1 ,0);

    int count_1 = 0;

    for (int i = v.size()-1 ; i >= 1 ; i--)
    {
        if (half - i >= 0)
        {
            v[i] = 1;
            half -= i;
            count_1++;
        }
    }

    cout << count_1 << endl;

    for (int i = 1 ; i <= v.size() ; i++)
    {
        if (v[i] == 1)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << n - count_1 << endl;

    for (int i = 1 ; i <= v.size() ; i++)
    {
        if (v[i] == 0)
        {
            cout << i << " ";
        }
    }


    
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}