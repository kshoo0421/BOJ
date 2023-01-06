#include <iostream>
#include <vector>
using namespace std;
vector<long long> triangle;

void set_triangle(const int& n)
{
	n < 6 ? triangle.assign(6, 0) : triangle.assign(n + 1, 0);
	triangle[0] = 0, triangle[1] = 1, triangle[2] = 1, triangle[3] = 1,
		triangle[4] = 2, triangle[5] = 2;
	for (int i = 6; i <= n; i++)
	{
		triangle[i] = triangle[i - 1] + triangle[i - 5];
	} 
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t, input, max = 0; cin >> t;
	while (t-- != 0)
	{
		cin >> input;
		if (max < input)
		{
			max = input;
			set_triangle(input);
		}
		cout << triangle[input] << "\n";
	}
	return 0;
}