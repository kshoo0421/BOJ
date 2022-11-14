#include <iostream>
using namespace std;

int first_contest(int rank)
{
	int count = 1;
	if (rank == 0) return 0;
	while (rank > 0)
	{
		rank -= count;
		if (rank <= 0) break;
		else count++;
		if (count == 7) break;
	}
	switch (count)
	{
	case 1: return 500;
	case 2: return 300;
	case 3: return 200;
	case 4: return 50;
	case 5: return 30;
	case 6: return 10;
	default: break;
	}
	return 0;
}

int second_contest(int rank)
{
	int count = 1;
	if (rank == 0) return 0;
	while (rank > 0)
	{
		rank -= count;
		if (rank <= 0) break;
		else count *= 2;
		if (count == 32) break;
	}
	switch (count)
	{
	case 1: return 512;
	case 2: return 256;
	case 4: return 128;
	case 8: return 64;
	case 16: return 32;
	default: break;
	}
	return 0;

}

int main()
{
	int n, a, b, result;
	cin >> n;
	while (n-- != 0)
	{
		cin >> a >> b;
		result = 0;
		result += first_contest(a);
		result += second_contest(b);
		cout << result * 10000 << endl;
	}
	return 0;
}