#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];	
		}		
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0; 
		for (int j = 0; j <n; j++) {
			if (j != i)
				cnt += a[i][j];
		}
		if (cnt >= n / 2)
			cout << i+1 << " ";	
	} 
	return 0;
}

