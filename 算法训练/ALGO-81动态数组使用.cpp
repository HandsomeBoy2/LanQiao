#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum << " " << sum / n;
	return 0;
}

