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

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void solve()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string final_str;

    for (int i = 0; i < str.size(); i++)
    {
        if (!isVowel(str[i]))
        {
            final_str += str[i];
        }
    }
    str = final_str;

    for (int i = 0; i < str.size(); i++)
    {
        if (i  != str.size())
            cout << '.';

        cout << str[i];
    }

    cout <<  endl;
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