#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    string s;
    cin >> n >> s;

    int cnt_1 = 0, cnt_0 = 0;

    for (int i = 0; i < n; i++) {
        cnt_1 += (s[i] == '1');
    }
    cnt_0 = n - cnt_1;

    bool possible = false;
    for (int i = 0; i < n - 1; i++) {

        if (s[i] != s[i + 1]) {
            possible = true;
            break;
        }
    }

    if (cnt_0 > cnt_1 or possible) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;

    // 00000
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}