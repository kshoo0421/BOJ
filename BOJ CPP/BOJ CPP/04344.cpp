#include <iostream>
using namespace std;

int main()
{
	int n, c;
	float count, sum, avr, result;
	cin >> n;
	while (n-- != 0)
	{
		sum = 0;
		count = 0;
		cin >> c;
		float* grade = new float[c];
		for(int i = 0; i < c; i++)
		{
			cin >> grade[i];
			sum += grade[i];
		}
		avr = sum / c;
		for (int i = 0; i < c; i++)
			if (grade[i] > avr) count++;
		result = count / c * 100;
		printf("%.3f%%\n", result);
		delete grade;
	}
	return 0;
}