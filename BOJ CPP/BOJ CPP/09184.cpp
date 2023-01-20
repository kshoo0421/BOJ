#include <bits/stdc++.h>
using namespace std;
int memo[21][21][21];

void make_memo(int a, int b, int c)
{
    if (a == 0 || b == 0 || c == 0) memo[a][b][c] = 1;
    else if (a < b && b < c) memo[a][b][c] = memo[a][b][c - 1] + memo[a][b - 1][c - 1] - memo[a][b - 1][c];
    else memo[a][b][c] = memo[a - 1][b][c] + memo[a - 1][b - 1][c] + memo[a - 1][b][c - 1] - memo[a - 1][b - 1][c - 1];
}


int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return memo[20][20][20];
    return memo[a][b][c];
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
    int a, b, c;
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            for (int k = 0; k <= 20; k++) make_memo(i, j, k);
        }
    }

    cin >> a >> b >> c;
    while (!(a == -1 && b == -1 && c == -1))
    {
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
        cin >> a >> b >> c;
    }
}