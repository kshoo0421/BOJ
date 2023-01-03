#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, count = 0;
	bool impossible = false, is_different[51][51] = { false };
	cin >> n >> m;
	vector<string> matrix_a(n);
	vector<string> matrix_b(n);
	for (int i = 0; i < n; i++) cin >> matrix_a[i];
	for (int i = 0; i < n; i++) cin >> matrix_b[i];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (matrix_a[i][j] != matrix_b[i][j]) is_different[i][j] = true;

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			if (is_different[i][j])
			{
				count++;
				for (int k = i; k < i + 3; k++)
					for (int l = j; l < j + 3; l++)
						is_different[k][l] = !(is_different[k][l]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (is_different[i][j])
			{
				count = -1;
				impossible = true;
				break;
			}
		}
		if (impossible) break;
	}
	cout << count;
	return 0;
}