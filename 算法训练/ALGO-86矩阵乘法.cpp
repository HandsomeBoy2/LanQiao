#include <iostream>

using namespace std;
int main()
{
	int m, s, n;
	cin >> m >> s >> n;
	int a[m][s] = {0}, b[s][n] = {0}, c[m][n] = {0}; 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < s; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < s; k++)
			c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0) cout << " "; 
			cout << c[i][j];
		}
		cout << endl;
	}
	return 0;
}

