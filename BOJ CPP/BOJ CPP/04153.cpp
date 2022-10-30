#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	while (!(x == 0 && y == 0 && z == 0))
	{
		x *= x;
		y *= y;
		z *= z;
		
		if (x + y == z || x + z == y || y + z == x)
			cout << "right" << endl;
		else cout << "wrong" << endl;
		cin >> x >> y >> z;
	}
	return 0;
}