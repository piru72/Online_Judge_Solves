#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin >> n;
    vector <int > v(n,0); rep(0,n)cin >> v[i];
    sort(v.begin() , v.end());
    rep(0,n) cout << v[i] << " ";
    cout << endl; 
    return 0;
}