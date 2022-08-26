#include <bits/stdc++.h>
using namespace std;

using ll = long long;
char s[12][12];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{

    int r, c, i, j, count = 0, k;
    cin >> r >> c;
    for (i = 1; i <= r; i++)
    {
        cin >> s[i] + 1;
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (s[i][j] != '*')
            {
                
                bool possible = true;
                for (k = 0; k < 4; k++)
                {
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if (s[tx][ty] == '*')
                    {
                        possible = false;
                        break;
                    }
                }
                if (possible)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}