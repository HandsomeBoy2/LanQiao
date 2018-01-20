#include <iostream>
#include <vector>
using namespace std;
int CompactIntegers(int *p, int n) 
{
 	int cnt = n;
	for (int i = 0; i < cnt; i++) {
		if (*(p+i) == 0) {
			for (int j = i; j < cnt; j++) {
				*(p+j) = *(p+j+1);
			}
			i--;
			cnt--;		
		}
	}
	return cnt;
}
int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m = CompactIntegers(&a[0], n);
	cout << m << endl;
	for (int i = 0; i < m; i++) 
		cout << a[i] << " ";
	return 0;
}

