#include <iostream>
#include <algorithm> 

#define MAX 101
int a[MAX][MAX];
using namespace std;

int MaxSum(int n) 
{
	for (int i = n-1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			a[i][j] = max(a[i+1][j], a[i+1][j+1]) + a[i][j];
		}
	}
	return a[1][1];
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> a[i][j];
		}
	}
	cout << MaxSum(n) << endl;
	
	return 0;
}

