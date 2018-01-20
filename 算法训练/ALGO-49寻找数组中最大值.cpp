#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	int temp = a[0], cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > temp) {
			temp = a[i];
			cnt = i;
		}
	}
	cout << temp << " " << cnt;
	return 0;
}

