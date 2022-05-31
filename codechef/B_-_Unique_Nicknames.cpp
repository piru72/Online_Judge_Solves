#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/

#define vi vector<int>
#define mii map<int, int>

#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())

#define SortA(ar, s) sort(ar, ar + s)
#define SortD(ar, s) sort(ar, ar + s, greater<int>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)

#define leftShift(p) (p << 1)
#define rightShift(p) (p >> 1)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
#define precision(x) cout << fixed << setprecision(x)

/**----data type----*/
#define ll long long int
#define llu unsigned long long int

/**----Functions to use----**/

ll powerLog(ll base, ll power)
{
    ll res = 1;
    while (power)
    {
        if (power % 2)
        {
            res *= base;
            power--;
        }
        else
        {
            base *= base;
            power /= 2;
        }
    }
    return res;
}
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    string str;
    vector<string> s;
    vector<string> t;

    cin >> n;
    int m = n;

    while (n--)
    {
        cin >> str;
        s.push_back(str);
        cin >> str;
        t.push_back(str);
    }

    vector<string> name;

    bool can = true;
    
    for (int i = 0; i < m; i++)
    {
        name.push_back(s[i]);
        
        for (int j = 0; j < m; j++)
        {
            if (name[i] == s[j] && i != j)
            { 
                name[i] = t[i];
                can = false;
                break;
            }
        }
        
       
            for (int j = 0; j < m; j++)
            {
                if (name[i] == t[j] && i != j)
                {
                    can = false;
                    break;   
                }
                else can = true;
            }
        

        if (can == false)
        {
            cout << "No";
            break;
        }
    }

    if (can == true) cout << "Yes";
   
    return 0;
}