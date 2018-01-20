#include <iostream>
#include <algorithm>
#include <vector>
bool cmp(int a, int b) { return a > b;}
using namespace std;
int main()
{
	int T, n;
	int p[8] = {0}, q[8] = {0};
	cin >> T;
	int MinSum = 0;
	while (T--) {
		cin >> n;
		for (int j = 0; j < n; j++) 
			cin >> p[j];
		sort(p, p + n, cmp);
		for (int j = 0; j < n; j++)
			cin >> q[j];
		sort(q, q + n);
		for (int j = 0; j < n; j++) {
			MinSum += p[j] * q[j];
		}	
		cout << MinSum << endl; 
		MinSum = 0; 
	}
	
	return 0;
}

