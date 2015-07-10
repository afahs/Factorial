#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	int n;
	int factorial = 1;
	cout << "Enter a positive integer";
	cin >> n;
	while (n >= i)
	{
		factorial *= i;
		i++;
	}
	cout << "Factorial of " << n << "=" << factorial;
		return 0;
}