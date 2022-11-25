#include <iostream>

unsigned long long fibo(const int& n)
{
	unsigned long long fib[91];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i < 91; i++)
		fib[i] = fib[i - 1] + fib[i-2]; 
	return fib[n];
}

int main()
{
	int n;
	unsigned long long result;
	std::cin >> n;
	result = fibo(n);
	std::cout << result;
}