#include <iostream>
#include <string>
using namespace std;

class BigInteger
{
private :
	string value;

	enum compare {
		BIG, SMALL, EQUAL
	};

	compare makeCompare(int a, int b)
	{
		if (a > b)
			return BIG;
		else if (a < b)
			return SMALL;
		else return EQUAL;
	}

public :
	BigInteger(string str)
	{
		value = str;
	}

	BigInteger operator+(const BigInteger& anotherBigInt)
	{
		int l_length = this->value.length();
		int r_length = anotherBigInt.value.length();
		char* temp_string;
		compare comp_result = makeCompare(l_length, r_length);
		
		// 동적 할당
		if (comp_result == BIG)
			temp_string = new char[l_length];
		else
			temp_string = new char[l_length];


		string result_string = temp_string;

		// 할당 해제
		delete temp_string;
		return result_string;
	}

	BigInteger operator/(const BigInteger& anotherBigInt)
	{
		int l_length = this->value.length();
		int r_length = anotherBigInt.value.length();
		
		
	}

	BigInteger operator%(const BigInteger& anotherBigInt)
	{

	}

};

int main()
{
	string a, b;
	cin >> a >> b;
	BigInteger BigA(a), BigB(b);

	// a/b 출력
	// a%b 출력
	return 0;
}