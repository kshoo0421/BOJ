#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	bool is_upper = false;
	int temp_int;
	string a, b, temp_str, result = "";
	cin >> a >> b;
	if (a.length() < b.length())
	{
		temp_str = a;
		a = b;
		b = temp_str;
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < a.length(); i++)
	{
		temp_int = (a[i] - '0');
		temp_int += (i < b.length()) ? (b[i] - '0') : 0;
		if (is_upper) temp_int++, is_upper = false;
		if (temp_int >= 10)	temp_int -= 10, is_upper = true;
		result +=  (char)(temp_int + '0');
	}
	if (is_upper) result += '1';
	reverse(result.begin(), result.end());
	cout << result;
	return 0;
}