#include <iostream>
using namespace std;

int main()
{
	int n;
	float max = 0, sum = 0, result = 0;
	cin >> n;
	float* ptrGrade = new float[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ptrGrade[i];
		sum += ptrGrade[i];
		if (ptrGrade[i] > max)
			max = ptrGrade[i];
	}
	sum = sum / max * 100;
	result = sum / n;
	cout << result;

	delete ptrGrade;
	return 0;
}