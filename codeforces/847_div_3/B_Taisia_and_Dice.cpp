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
    int n, s, r;
    cin >> n >> s >> r;

    int count = 0;

    int each_value = (r / (n - 1));

    vector<int> v;

    for (int i = 0; i < n - 1; i++)
    {
        v.push_back(each_value);
    }

    v.push_back(s - r);

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    int left = (s - sum);


    for (int i = 0; i < v.size(); i++)
    {
        if (left <= 0)
            break;
        if (v[i] < 6)
        {
            v[i] += 1;
            left--;
        }
    }
    int temp = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        temp += v[i];
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