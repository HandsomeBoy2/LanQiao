#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main()
{
	int n, i,sum = 0;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	cout << a[n-1] << endl << a[0] << endl << sum;
	return 0;
}

