#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(i&1))
        {
            count++;
            cout << i << endl;
        }
    }
    if (count == 0)
    {
        cout << "-1" << endl;
    }
    return 0;
}