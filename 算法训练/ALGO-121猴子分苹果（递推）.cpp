#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m, n;
	cin >> n >> m;
	int sum = pow(n, n + 1) - (n - m);
	cout << sum << endl;
	return 0;
}

