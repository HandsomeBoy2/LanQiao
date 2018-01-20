#include <iostream>
using namespace std;
bool isprime(int a) 
{
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0)
		return false;
	}
	return true;
}

int main()
{
	int n, cnt = 1, i = 2;
	long long product = 1;
	cin >> n;
	while (cnt <= n) {
		if (isprime(i)) {
			product = product * i;
			cnt++;
		}	
		i++;
	}
	cout << (product % 50000);
	return 0;
}

