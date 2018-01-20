#include <iostream>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int n = a, m = b;
	int c = 0;
	while (a != 0) {
		c = b % a;
		b = a;
		a = c;
	}
	cout << m * n / b;
	return 0;
}

