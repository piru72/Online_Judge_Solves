#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {


    int n ;
    cin >> n ;
    set <int> s ;

    for(int i = 0 ; i < n ; i++ ) {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }

    cout << s.size() << endl ;
 }
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}